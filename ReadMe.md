
/// OCX 传参过程
/* 2
 * e:\github\focusSip\src\pjproject-2.7.1\pjsip\src\pjsua-lib\pjsua_vid.c
 */
ManageWindows.cpp {
    /* 3
     * e:\github\focusSip\src\pjproject-2.7.1\pjsip\src\pjsua-lib\pjsua_vid.c
     */
    PJ_DEF(pj_status_t) pjsua_vid_win_set_pos(
    pjmedia_vid_dev_stream *s){
    /* 4
     * e:\github\focusSip\src\pjproject-2.7.1\pjmedia\src\pjmedia\videodev.c
     */
    pjsua_vid_win_id wid, const pjmedia_coord *pos) {
        PJ_DEF(pj_status_t) pjmedia_vid_dev_stream_set_cap(
        pjmedia_vid_dev_stream *strm,
        pjmedia_vid_dev_cap cap,
        const void *value)
        return strm->op->set_cap(strm, cap, &p);
    }
}
/* 5
 * E:\github\focusSip\src\pjproject-2.7.1\pjmedia\include\pjmedia-videodev\videodev_imp.h
 */
struct pjmedia_vid_dev_stream {
    /** Internal data to be initialized by video subsystem */
    struct {
    /** Driver index */
    unsigned drv_idx;

    /** Has it been started? */
    pj_bool_t is_running;
    } sys;

    /** Operations */
    pjmedia_vid_dev_stream_op *op;
};
/* 6
 * e:\github\focusSip\src\pjproject-2.7.1\pjmedia\src\pjmedia-videodev\sdl_dev.c
 */
static pjmedia_vid_dev_stream_op stream_op = {
    &sdl_stream_get_param,
    &sdl_stream_get_cap,
    &sdl_stream_set_cap,
    &sdl_stream_start,
    NULL,
    &sdl_stream_put_frame,
    &sdl_stream_stop,
    &sdl_stream_destroy,
    &sdl_stream_set_dir
};
/* 7
 * E:\github\focusSip\src\pjproject-2.7.1\pjmedia\include\pjmedia-videodev\videodev_imp.h
 */
typedef struct pjmedia_vid_dev_stream_op {
    pj_status_t (*get_param)    (pjmedia_vid_dev_stream *strm, pjmedia_vid_dev_param *param);
    pj_status_t (*get_cap)      (pjmedia_vid_dev_stream *strm, pjmedia_vid_dev_cap cap, void *value);
    pj_status_t (*set_cap)      (pjmedia_vid_dev_stream *strm, pjmedia_vid_dev_cap cap, const void *value);
    pj_status_t (*start)        (pjmedia_vid_dev_stream *strm);
    pj_status_t (*get_frame)    (pjmedia_vid_dev_stream *strm, pjmedia_frame *frame);
    pj_status_t (*put_frame)    (pjmedia_vid_dev_stream *strm, const pjmedia_frame *frame);
    pj_status_t (*stop)         (pjmedia_vid_dev_stream *strm);
    pj_status_t (*destroy)      (pjmedia_vid_dev_stream *strm);
    pj_status_t (*set_dir)      (pjmedia_vid_dev_stream *strm, const void *value);
} pjmedia_vid_dev_stream_op;
/* 8
 * e:\github\focusSip\src\pjproject-2.7.1\pjmedia\src\pjmedia-videodev\sdl_dev.c
 */
static pj_status_t sdl_stream_set_dir(pjmedia_vid_dev_stream *s, const void *pval) {
    
(strm->sf->jq, set_dir, &sdir, 0, &status);
}
/* 9
 * e:\github\focusSip\src\pjproject-2.7.1\pjmedia\src\pjmedia-videodev\sdl_dev.c
 */
static pj_status_t set_dir(void *data) {
    struct strm_dir     *sdir       = (struct strm_dir *)data;
    struct sdl_stream   *strm       = sdir->strm;
    pj_str_t            dir         = sdir->dir;
    pj_str_t            full_dir;
    pj_str_t            play_dir;
    pj_str_t            close_dir;
    char                strbuf[100];

    if (dir.slen == 0) {
        PJ_LOG(4, (THIS_FILE, "<running_dir> is null, may be we can't find the bmp of buttons."));
    }
    SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "BMP Dir is %s", &strbuf );

    strm->running_dir=dir;
    pj_ansi_snprintf(strbuf, sizeof(strbuf),"%s\\button.bmp", strm->running_dir.ptr );

    full_dir  = pj_str(strbuf);
    play_dir  = pj_str(full_dir.ptr);
    close_dir = pj_str(full_dir.ptr);

    sdl_toolbar_load_play (strm, play_dir.ptr );
    sdl_toolbar_load_close(strm, close_dir.ptr );

    return 0;
}

(pjmedia_vid_dev_stream *strm)
struct sdl_stream *stream = (struct sdl_stream*)strm;


job_queue_post_job(stream->sf->jq, put_frame_stream, strm, 0, &status);

static pj_status_t put_frame_stream (void *data){
    struct sdl_stream *strm = (struct sdl_stream *)data;

struct pjmedia_vid_dev_stream
{
    /** Internal data to be initialized by video subsystem */
    struct {
    /** Driver index */
    unsigned drv_idx;

    /** Has it been started? */
    pj_bool_t is_running;
    } sys;

    /** Operations */
    pjmedia_vid_dev_stream_op *op;
};



e:\github\focusSip\src\pjproject-2.7.1\pjmedia\src\pjmedia-videodev\sdl_dev.c
    static pj_status_t put_frame_stream (void *data){
e:\github\focusSip\src\pjproject-2.7.1\pjmedia\src\pjmedia-videodev\sdl_dev.c
    job_queue_post_job(stream->sf->jq, put_frame_stream, strm, 0, &status);

e:\github\focusSip\src\pjproject-2.7.1\pjmedia\src\pjmedia\videodev.c
PJ_DEF(pj_status_t) pjmedia_vid_dev_stream_put_frame(pjmedia_vid_dev_stream *strm,const pjmedia_frame *frame){
    pj_assert(strm->op->put_stream);
    return strm->op->put_stream(strm, frame);
}

e:\github\focusSip\src\pjproject-2.7.1\pjmedia\src\pjmedia\vid_port.c{
    static pj_status_t vid_pasv_port_put_frame(struct pjmedia_port *this_port,pjmedia_frame *frame){
    return pjmedia_vid_dev_previw_put_frame(vp->strm, (vp->conv.conv?&frame_: frame));
    }
}

static void dec_clock_cb(const pj_timestamp *ts, void *user_data){
    status = pjmedia_vid_dev_stream_put_frame(vp->strm, &frame);
}

status = pjmedia_clock_create2(pool, &param,
           PJMEDIA_CLOCK_NO_HIGHEST_PRIO,
           (vp->dir & PJMEDIA_DIR_ENCODING) ?
           &enc_clock_cb: &dec_clock_cb,
           vp, &vp->clock);


pjmedia_vid_port_create{
    status = pjmedia_vid_dev_stream_create(&vparam, &vid_cb, vp, &vp->strm);
    
    pjmedia_event_subscribe(NULL, &vidstream_event_cb, vp, vp->strm);
}




728 000
2088

728 2088
2088

PJ_DEF(pj_status_t) pjsua_vid_win_get_info( pjsua_vid_win_id wid, pjsua_vid_win_info *wi){
    pjsua_vid_win *w;
    pjmedia_vid_dev_stream *s;
    pjmedia_vid_dev_param vparam;
    pj_status_t status;

    PJ_ASSERT_RETURN(wid >= 0 && wid < PJSUA_MAX_VID_WINS && wi, PJ_EINVAL);

    pj_bzero(wi, sizeof(*wi));

    PJSUA_LOCK();
    w = &pjsua_var.win[wid];
    
    // ABChecked
    wi->is_native = w->is_native;

    // ABChecked
    if (w->is_native) {
        pjmedia_vid_dev_stream *cap_strm;
        pjmedia_vid_dev_cap cap = PJMEDIA_VID_DEV_CAP_OUTPUT_WINDOW;

        if (!w->vp_cap) {
            status = PJ_EINVAL;
        } else {
            cap_strm = pjmedia_vid_port_get_stream(w->vp_cap);
            if (!cap_strm) {
            status = PJ_EINVAL;
            } else {
            status = pjmedia_vid_dev_stream_get_cap(cap_strm, cap, 
                                &wi->hwnd);
            }
        }
        PJSUA_UNLOCK();
        return status;
    }

    if (w->vp_rend == NULL) {
        PJSUA_UNLOCK();
        return PJ_EINVAL;
    }

    s = pjmedia_vid_port_get_stream(w->vp_rend);
    if (s == NULL) {
        PJSUA_UNLOCK();
        return PJ_EINVAL;
    }

    status = pjmedia_vid_dev_stream_get_param(s, &vparam);
    if (status != PJ_SUCCESS) {
        PJSUA_UNLOCK();
        return status;
    }

    wi->rdr_dev = vparam.rend_id;
    wi->hwnd    = vparam.window;
    wi->show    = !vparam.window_hide;
    wi->pos     = vparam.window_pos;
    wi->size    = vparam.disp_size;

    PJSUA_UNLOCK();

    return PJ_SUCCESS;
}














/* Internal function: update video channel after SDP negotiation.
 * Warning: do not use temporary/flip-flop pool, e.g: inv->pool_prov,
 *          for creating stream, etc, as after SDP negotiation and when
 *      the SDP media is not changed, the stream should remain running
 *          while the temporary/flip-flop pool may be released.
 */
pj_status_t pjsua_vid_channel_update(pjsua_call_media *call_med,
     pj_pool_t *tmp_pool,
     pjmedia_vid_stream_info *si,
     const pjmedia_sdp_session *local_sdp,
     const pjmedia_sdp_session *remote_sdp){
    /* Create stream video window */
    status = create_vid_win(PJSUA_WND_TYPE_STREAM,
        &media_port->info.fmt,
        call_med->strm.v.rdr_dev,
        //acc->cfg.vid_rend_dev,
        PJSUA_INVALID_ID,
        acc->cfg.vid_in_auto_show,
        // acc->cfg.vid_wnd_flags,
        // ABChernic
        acc->cfg.vid_stream_wnd_flags,
        NULL,
        &wid);
    
    status = create_vid_win(PJSUA_WND_TYPE_PREVIEW,
        &media_port->info.fmt,
        call_med->strm.v.rdr_dev,
        call_med->strm.v.cap_dev,
        PJSUA_HIDE_WINDOW,
        // acc_enc->cfg.vid_wnd_flags,
        // ABChernic
        acc_enc->cfg.vid_wnd_flags,
        NULL,
        &wid);
}
/* Change capture device of a video stream in a call */ 
static pj_status_t call_change_cap_dev(pjsua_call *call,
                       int med_idx,
                       pjmedia_vid_dev_index cap_dev)
        &media_port->info.fmt,{
    status = create_vid_win(PJSUA_WND_TYPE_PREVIEW,
        call_med->strm.v.rdr_dev,
        cap_dev,
        PJSUA_HIDE_WINDOW,
        // acc->cfg.vid_wnd_flags,
        // ABChernic
        acc->cfg.vid_wnd_flags,
        NULL,
        &new_wid);
}

/* See also pjsua_vid_win_type_name() */
typedef enum pjsua_vid_win_type{
    PJSUA_WND_TYPE_NONE,
    PJSUA_WND_TYPE_PREVIEW,
    PJSUA_WND_TYPE_STREAM,
    PJSUA_WND_TYPE_COMPLEX                                      /// 增加这种窗口吧
} pjsua_vid_win_type;

/// 关键词 w->type 
static pjsua_vid_win_id vid_preview_get_win(pjmedia_vid_dev_index id,
                                            pj_bool_t running_only){
    pjsua_vid.c(501):    if (w->type == PJSUA_WND_TYPE_PREVIEW && w->preview_cap_id == id) {
    }
}

static pj_status_t create_vid_win(pjsua_vid_win_type type,{
    pjsua_vid.c(690):    if (w->type == PJSUA_WND_TYPE_PREVIEW) {
        pjmedia_vid_dev_info vdi;

        /*
         * Determine if the device supports native preview.
         */
        status = pjmedia_vid_dev_get_info(cap_id, &vdi);
        if (status != PJ_SUCCESS)
            goto on_error;

        if (enable_native_preview &&
             (vdi.caps & PJMEDIA_VID_DEV_CAP_INPUT_PREVIEW))
        {
            /* Device supports native preview! */
            w->is_native = PJ_TRUE;
        }

        status = pjmedia_vid_dev_default_param(w->pool, cap_id,
                               &vp_param.vidparam);
        if (status != PJ_SUCCESS)
            goto on_error;

        if (w->is_native) {
            vp_param.vidparam.flags |= PJMEDIA_VID_DEV_CAP_OUTPUT_HIDE;
            vp_param.vidparam.window_hide = !show;
            vp_param.vidparam.flags |= PJMEDIA_VID_DEV_CAP_OUTPUT_WINDOW_FLAGS;
            vp_param.vidparam.window_flags = wnd_flags;
        }

        /* Normalize capture ID, in case it was set to
         * PJMEDIA_VID_DEFAULT_CAPTURE_DEV
         */
        cap_id = vp_param.vidparam.cap_id;

        /* Assign preview capture device ID */
        w->preview_cap_id = cap_id;

        /* Create capture video port */
        vp_param.active = PJ_TRUE;
        vp_param.vidparam.dir = PJMEDIA_DIR_CAPTURE;

            /* Update the video setting with user preference */
    #define update_param(cap, field)    \
            if ((pjsua_var.vid_caps[cap_id] & cap) && (vdi.caps & cap)) { \
                vp_param.vidparam.flags |= cap; \
                pj_memcpy(&vp_param.vidparam.field, \
                      &pjsua_var.vid_param[cap_id].field, \
                      sizeof(vp_param.vidparam.field)); \
            }

        if (fmt) {
        update_param(PJMEDIA_VID_DEV_CAP_ORIENTATION, orient);
            vp_param.vidparam.fmt = *fmt;
        } else {
            update_param(PJMEDIA_VID_DEV_CAP_FORMAT, fmt);
        }
        

    #undef update_param

        status = pjmedia_vid_port_create(w->pool, &vp_param, &w->vp_cap);
        if (status != PJ_SUCCESS)
            goto on_error;

        /* Update format info */
        fmt_ = vp_param.vidparam.fmt;
        fmt = &fmt_;

        /* Create video tee */
        status = pjmedia_vid_tee_create(w->pool, fmt, VID_TEE_MAX_PORT,
                        &w->tee);
        if (status != PJ_SUCCESS)
            goto on_error;

        /* Connect capturer to the video tee */
        status = pjmedia_vid_port_connect(w->vp_cap, w->tee, PJ_FALSE);
        if (status != PJ_SUCCESS)
            goto on_error;

        /* If device supports native preview, enable it */
        if (w->is_native) {
            pjmedia_vid_dev_stream *cap_dev;
            pj_bool_t enabled = PJ_TRUE;

            cap_dev = pjmedia_vid_port_get_stream(w->vp_cap);
            status = pjmedia_vid_dev_stream_set_cap(
                    cap_dev, PJMEDIA_VID_DEV_CAP_INPUT_PREVIEW,
                    &enabled);
            if (status != PJ_SUCCESS) {
            PJ_PERROR(1,(THIS_FILE, status,
                     "Error activating native preview, falling back "
                     "to software preview.."));
            w->is_native = PJ_FALSE;
            }
        }
    }

pjsua_vid.c(812):    if (w->type == PJSUA_WND_TYPE_PREVIEW) {
pjsua_vid.c(2117):    pj_assert(w->type == PJSUA_WND_TYPE_PREVIEW && w->vp_cap);

pjsua_vid.c(538):       /// if (w->type == PJSUA_WND_TYPE_STREAM && w->preview_cap_id == id) {
pjsua_vid.c(540):       if (w->type == PJSUA_WND_TYPE_STREAM) {
pjsua_vid.c(794):       vp_param.active = (w->type == PJSUA_WND_TYPE_STREAM);

pjsua_vid.c(676):               if (w->type == PJSUA_WND_TYPE_NONE) {
pjsua_vid.c(882):               pj_assert(w->type != PJSUA_WND_TYPE_NONE);
pjsua_vid.c(893):               pj_assert(w->type != PJSUA_WND_TYPE_NONE);
pjsua_vid.c(1426):              if (w->type != PJSUA_WND_TYPE_NONE)

pjsua_vid.c(678):                   w->type = type;

pjmedia_vid_port : Opaque data type for video port. 
pjmedia_vid_port        *vp_cap;            /**< Capture  vidport.  */
    E:\github\focusSip\src\pjproject-2.7.1\pjsip\src\pjsua-lib\pjsua_vid.c (41 hits)

//////////////////////////////////////////////////////////////////////
PJ_DEF(pj_status_t) pjsua_vid_dev_set_setting(){
    Line 231:           cap_dev = pjmedia_vid_port_get_stream(w->vp_cap);
}
PJ_DEF(pj_status_t) pjsua_vid_dev_get_setting(){
    Line 270:           cap_dev = pjmedia_vid_port_get_stream(w->vp_cap);
}
static pj_status_t  create_vid_win(){
    // ABChecked
    if (w->preview_is_native) {
        Line 579:       strm = pjmedia_vid_port_get_stream(w->vp_cap);
    } else {
                        strm = pjmedia_vid_port_get_stream(w->vp_rend);
    }
}
    Line 690:         status = pjmedia_vid_port_create(w->pool, &vp_param, &w->vp_cap);
    Line 704:         status = pjmedia_vid_port_connect(w->vp_cap, w->tee, PJ_FALSE);
    Line 714:             cap_dev = pjmedia_vid_port_get_stream(w->vp_cap);
    Line 792:     if (w->vp_cap) {
    Line 793:         pjmedia_event_unsubscribe(NULL, &call_media_on_event, NULL,w->vp_cap);
    Line 794:         pjmedia_vid_port_stop      (w->vp_cap);
    Line 795:         pjmedia_vid_port_disconnect(w->vp_cap);
    Line 796:         pjmedia_vid_port_destroy   (w->vp_cap);
    Line 1060:                 pjmedia_event_subscribe(NULL, &call_media_on_event,call_med, w->vp_cap);
    Line 1072:                 status = pjmedia_vid_port_start(w->vp_cap);
    Line 1121:     pjmedia_vid_port_stop(w->vp_cap);
    Line 1132:     pjmedia_event_unsubscribe(NULL, &call_media_on_event, call_med, w->vp_cap);
    Line 1136:         pjmedia_vid_port_start(w->vp_cap);
    Line 1226:     if (w->preview_is_native && !pjmedia_vid_port_is_running(w->vp_cap)) {
    Line 1230:         cap_dev = pjmedia_vid_port_get_stream(w->vp_cap);
    Line 1254:     if (!pjmedia_vid_port_is_running(w->vp_cap)) {
    Line 1255:         status = pjmedia_vid_port_start(w->vp_cap);
    Line 1297:             cap_dev = pjmedia_vid_port_get_stream(w->vp_cap);
    Line 1369:     if (!w->vp_cap) {
    Line 1372:         cap_strm = pjmedia_vid_port_get_stream(w->vp_cap);
    Line 1425:     s = pjmedia_vid_port_get_stream(w->vp_rend? w->vp_rend: w->vp_cap);
    Line 1456:     s = pjmedia_vid_port_get_stream(w->vp_rend? w->vp_rend: w->vp_cap);
    Line 1481:     s = pjmedia_vid_port_get_stream(w->vp_rend? w->vp_rend: w->vp_cap);
    Line 1507:     s = pjmedia_vid_port_get_stream(w->vp_rend? w->vp_rend: w->vp_cap);
    Line 1534:     s = pjmedia_vid_port_get_stream(w->vp_rend? w->vp_rend: w->vp_cap);
    Line 1586:     s = pjmedia_vid_port_get_stream(w->vp_rend? w->vp_rend: w->vp_cap);
    Line 1982:     pj_assert(w->type == PJSUA_WND_TYPE_PREVIEW && w->vp_cap);
    Line 1985:     old_dev = pjmedia_vid_port_get_stream(w->vp_cap);
    Line 2003:     pjmedia_event_unsubscribe(NULL, &call_media_on_event, call_med, w->vp_cap);
    Line 2006:     pjmedia_vid_port_disconnect(w->vp_cap);
    Line 2020:     pjmedia_vid_port_connect(w->vp_cap, w->tee, PJ_FALSE);
    Line 2064:                             call_med, new_w->vp_cap);
    Line 2068:     if (!pjmedia_vid_port_is_running(new_w->vp_cap)) {
    Line 2069:     status = pjmedia_vid_port_start(new_w->vp_cap);
    Line 2089:                                   new_w->vp_cap);
    Line 2097:     pjmedia_vid_port_disconnect(w->vp_cap);
    Line 2099:     pjmedia_vid_port_connect(w->vp_cap, w->tee, PJ_FALSE);
    Line 2106:                             call_med, w->vp_cap);



192.168.1.250
192.168.1.215

//////////////////////////////////////////////////////////////////////
pjmedia_vid_port        *vp_rend;           /**< Renderer vidport   */

//////////////////////////////////////////////////////////////////////
pjmedia_port            *tee;               /**< Video tee          */
//////////////////////////////////////////////////////////////////////
pjsua_vid.c(698):     01    status = pjmedia_vid_tee_create(w->pool, fmt, VID_TEE_MAX_PORT, &w->tee);
pjsua_vid.c(703):     02    status = pjmedia_vid_port_connect(w->vp_cap, w->tee, PJ_FALSE);
pjsua_vid.c(757):     03    status = pjmedia_vid_tee_add_dst_port2(w->tee, 0, rend_port);
pjsua_vid.c(803):     04 if (w->tee) {
pjsua_vid.c(804):     05 pjmedia_port_destroy(w->tee);
pjsua_vid.c(1062):    06        status = pjmedia_vid_tee_add_dst_port2(w->tee, 0, media_port);
pjsua_vid.c(1126):    07     pjmedia_vid_tee_remove_dst_port(w->tee, media_port);
pjsua_vid.c(2007):    08 status = pjmedia_vid_tee_remove_dst_port(w->tee, media_port);
pjsua_vid.c(2017):    09 /* Reconnect again immediately. We're done with w->tee */
pjsua_vid.c(2018):    10 pjmedia_vid_port_connect(w->vp_cap, w->tee, PJ_FALSE);
pjsua_vid.c(2049):    11 status = pjmedia_vid_tee_add_dst_port2(new_w->tee, 0, media_port);
pjsua_vid.c(2089):    12 pjmedia_vid_tee_remove_dst_port(new_w->tee, media_port);
pjsua_vid.c(2096):    13 status = pjmedia_vid_tee_add_dst_port2(w->tee, 0, media_port);
pjsua_vid.c(2097):    14 pjmedia_vid_port_connect(w->vp_cap, w->tee, PJ_FALSE);

--------------------------------------------------------------------------------------------------------
>>> sdl_dev_m.m
#include "sdl_dev.cpp"
>>> sdl_dev.cpp
#define THIS_FILE           "sdl_dev.c"
### no SDL_Button etc.

1>libpjproject-i386-Win32-vc8-Debug.lib(videodev.obj) : error LNK2019: 无法解析的外部符号 _pjmedia_sdl_factory，该符号在函数 _pjmedia_vid_dev_subsys_init 中被引用
1>Debug\FocusSipAtl.dll : fatal error LNK1120: 1 个无法解析的外部命令
--------------------------------------------------------------------------------------------------------
结论 : 改成cpp引起
--------------------------------------------------------------------------------------------------------

>>> pjsua_core.c
struct pjsua_data pjsua_var;
status = pjmedia_vid_dev_subsys_init(&pjsua_var.cp.factory);

查找全部 "scr_texS", 大小写匹配, 子文件夹, 查找结果 1, "当前项目", "*"
sdl_dev.c(222):    SDL_Texture             *scr_texS;      /**< Screen  texture.   */
sdl_dev.c(786):    if (strm->scr_texS) {                                                       // destroy<<
sdl_dev.c(787):        SDL_DestroyTexture(strm->scr_texS);                                     // destroy
sdl_dev.c(788):        strm->scr_texS = NULL;                                                  // destroy>>

sdl_dev.c(1170):        strm->scr_texS = SDL_CreateTexture(strm->renderer, sdl_format,          // create     : sdl_create_window
sdl_dev.c(1173):        if (strm->scr_texS == NULL) {                                           // create     : sdl_create_window
sdl_dev.c(1174):            sdl_log_err("scr_texS::SDL_CreateTexture()");
sdl_dev.c(1267):    if (strm->scr_texS) {                                                       // resize     : resize_disp
sdl_dev.c(1301):    if (stream->scr_texS) {
sdl_dev.c(1302):        SDL_UpdateTexture(stream->scr_texS, NULL, frame->buf, stream->pitch);
sdl_dev.c(1305):        SDL_RenderCopy(stream->renderer, stream->scr_texS, &stream->rect, &stream->dstrect);
匹配行: 11    匹配文件: 1    合计搜索文件: 13

查找全部 "scr_texP", 大小写匹配, 子文件夹, 查找结果 1, "当前项目", "*"
sdl_dev.c(221):    SDL_Texture             *scr_texP;      /**< Screen  texture.   */
sdl_dev.c(790):    if (strm->scr_texP) {                                                       // destroy<<
sdl_dev.c(791):        SDL_DestroyTexture(strm->scr_texP);                                     // destroy
sdl_dev.c(792):        strm->scr_texP = NULL;                                                  // destroy>>
  匹配行: 4    匹配文件: 1    合计搜索文件: 13

640 480
240 398 80 80
320 398 80 80

// 他人
dec_clock_cb{
    
    {
        put_frame
    }
}

// 自己
vid_pasv_port_put_frame{
    pjmedia_vid_dev_stream_put_frame{
        put_frame
    }
}

查找全部 "dl_stream_put_previw", 大小写匹配, 子文件夹, 查找结果 1, "整个解决方案", "*"
vid_port.c(1278):		return sdl_stream_put_previw(vp->strm, (vp->conv.conv?&frame_: frame));
videodev_imp.h(131):	pj_status_t (*put_previw)(pjmedia_vid_dev_stream *strm,const void *value);						// 10 sdl_stream_put_previw	pjmedia_vid_dev_put_previw()
sdl_dev.c(278):static pj_status_t sdl_stream_put_previw(pjmedia_vid_dev_stream *strm,const pjmedia_frame *frame);
sdl_dev.c(309):    &sdl_stream_put_previw,			// 10 *put_previw
sdl_dev.c(1867):static pj_status_t sdl_stream_put_previw(pjmedia_vid_dev_stream *strm, const pjmedia_frame *frame){


videodev_imp.h(130):    pj_status_t (*set_dir)  (pjmedia_vid_dev_stream *strm,const void *value);						// O9 sdl_stream_set_dir	pjmedia_vid_dev_stream_set_dir()
sdl_dev.c(275): static pj_status_t sdl_stream_set_dir	(pjmedia_vid_dev_stream *strm, const void *value);
sdl_dev.c(308):    &sdl_stream_set_dir,            // O9 *set_dir
sdl_dev.c(1851):/* API: set_dir. */			        //############################################# O9 sdl_stream_set_dir //set_dir
sdl_dev.c(1852):static pj_status_t sdl_stream_set_dir(pjmedia_vid_dev_stream *s, const void *pval){


640*480  480*320
640*480  640*480



/**
 * Port interface.
 */
typedef struct pjmedia_port
{
    pjmedia_port_info       info;       /**< Port information.  */

    /** Port data can be used by the port creator to attach arbitrary
     *  value to be associated with the port.
     */
    struct port_data {
    void        *pdata;         /**< Pointer data.      */
    long        ldata;          /**< Long data.     */
    } port_data;

    /**
     * Get clock source.
     * This should only be called by #pjmedia_port_get_clock_src().
     */
    pjmedia_clock_src* (*get_clock_src)(struct pjmedia_port *this_port,
                                        pjmedia_dir dir);

    /**
     * Sink interface. 
     * This should only be called by #pjmedia_port_put_frame().
     */
    pj_status_t (*put_frame)(struct pjmedia_port *this_port, 
                pjmedia_frame *frame);

    /**
     * Source interface. 
     * This should only be called by #pjmedia_port_get_frame().
     */
    pj_status_t (*get_frame)(struct pjmedia_port *this_port, 
                pjmedia_frame *frame);

    /**
     * Called to destroy this port.
     */
    pj_status_t (*on_destroy)(struct pjmedia_port *this_port);

} pjmedia_port;


static pj_status_t put_frame_prwviw (void *data){
    struct sdl_stream *strm = (struct sdl_stream *)data;
    const pjmedia_frame *frame = strm->frame;

    //ABChernic : MIX
    // 这里默认两个视频容器同时存在才绘制
    if (strm->scr_texP && strm->scr_texS) {
        SDL_UpdateTexture(strm->scr_texP, NULL, frame->buf, strm->pitchP);
        if(0)
        {
            SDL_UpdateTexture(strm->scr_texS, NULL, frame->buf, strm->pitchS);
        }
        SDL_RenderClear  (strm->renderer);
        if(0)
        {
            SDL_RenderCopy   (strm->renderer, strm->scr_texP, NULL, &strm->dstrectS);	// NULL(3) means &strm->rectS
        }else{
            SDL_RenderCopy   (strm->renderer, strm->scr_texS, NULL, &strm->dstrectS);	// NULL(3) means &strm->rectS
        }
        SDL_RenderCopy   (strm->renderer, strm->scr_texP, NULL, &strm->dstrectP);		// NULL(3) means &strm->rectP

        sdl_toolbar_update(strm);
        if(strm->toolbar.isToolBarShowed){
            sdl_toolbar_show      (strm); // update strm->toolbar.mBlankRect
            sdl_toolbar_show_play (strm); // update strm->toolbar.mClose.decR
            sdl_toolbar_show_close(strm); // update strm->toolbar.mClose.decR
        }
        SDL_RenderPresent(strm->renderer);
    }
#if PJMEDIA_VIDEO_DEV_SDL_HAS_OPENGL
    else if (strm->param.rend_id == OPENGL_DEV_IDX && strm->texture) {
    glBindTexture(GL_TEXTURE_2D, strm->texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA,
             strm->rect.w, strm->rect.h, 0,
             GL_RGBA, GL_UNSIGNED_BYTE, frame->buf);
    glBegin(GL_TRIANGLE_STRIP);
    glTexCoord2f(0, 0); glVertex2i(0, 0);
    glTexCoord2f(1, 0); glVertex2i(strm->param.disp_size.w, 0);
    glTexCoord2f(0, 1); glVertex2i(0, strm->param.disp_size.h);
    glTexCoord2f(1, 1);
        glVertex2i(strm->param.disp_size.w, strm->param.disp_size.h);
    glEnd();
        SDL_GL_SwapWindow(strm->window);
    }
#endif 

    return PJ_SUCCESS;
}


    pj_pool_t                       *pool;          strm->pool          stream->pool
    pjmedia_vid_dev_cb              vid_cb;         strm->vid_cb    pj_memcpy(&strm->vid_cb, cb, sizeof(*cb));
    void                            *user_data;     strm->user_data
    struct sdl_factory              *sf;            strm->sf            stream->sf
    const pjmedia_frame             *frame;         strm->frame         stream->frame
    pj_bool_t                       is_running;     stream->is_running
    pj_timestamp                    last_ts;        strm->last_ts       stream->last_ts
    struct stream_list              list_entry;     strm->list_entry    stream->list_entry
    SDL_Window                      *window;        strm->window
    SDL_Renderer                    *renderer;      strm->renderer
    SDL_Texture                     *scr_tex;       strm->scr_tex
    int                             pitch;          strm->pitch
    SDL_Rect                        rect;           strm->rect
    SDL_Rect                        dstrect;        strm->dstrect
    SDL_GLContext                   *gl_context;    
    GLuint                          texture;        
    pjmedia_video_apply_fmt_param   vafp;           strm->vafp stream->vafp
    int                             thread_exit;    strm->thread_exit
    int                             thread_pause;   strm->thread_pause
    pj_str_t                        running_dir;    strm->running_dir
    sdl_toolbar_info_t              toolbar;        strm->toolbar
    
    //SDL_Window              *windowP;
    //SDL_Window              *windowS;
    //SDL_Texture             *scr_texP;            strm->scr_texP
    //SDL_Texture             *scr_texS;            strmS->scr_texS
    //int                     pitchP;               strm->pitchP
    //SDL_Rect                rectP;                strm->rectP
    //SDL_Rect                dstrectP;             strm->dstrectP
    //int                     pitchS;
    //SDL_Rect                rectS;

static pj_status_t sdl_factory_create_stream(
    pjmedia_vid_dev_factory *f, 
    pjmedia_vid_dev_param *param, 
    const pjmedia_vid_dev_cb *cb, 
    void *user_data, 
    pjmedia_vid_dev_stream **p_vid_strm){

    struct sdl_factory *sf = (struct sdl_factory*)f;
    pj_pool_t *pool;
    struct sdl_stream *strm;
    pj_status_t status;

    PJ_ASSERT_RETURN(param->dir == PJMEDIA_DIR_RENDER, PJ_EINVAL);

    /* Create and Initialize stream descriptor */
    pool = pj_pool_create(sf->pf, "sdl-dev", 1000, 1000, NULL);
    PJ_ASSERT_RETURN(pool != NULL, PJ_ENOMEM);

    strm = PJ_POOL_ZALLOC_T(pool, struct sdl_stream);
    pj_memcpy(&strm->param, param, sizeof(*param));
    strm->sp.pool = pool;
    strm->sp.sf = sf;
    pj_memcpy(&strm->sp.vid_cb, cb, sizeof(*cb));
    pj_list_init(&strm->sp.list_entry);
    strm->sp.list_entry.stream = strm;                                  // 这个多留意
    strm->sp.user_data = user_data;                                     // 这个可以利用

    /* Create render stream here */
    job_queue_post_job(sf->jq, sdl_create, strm, 0, &status);
    if (status != PJ_SUCCESS) {
        goto on_error;
    }
    pj_mutex_lock(strm->sp.sf->mutex);
    if (pj_list_empty(&strm->sp.sf->streams))
        pj_sem_post(strm->sp.sf->sem);
    pj_list_insert_after(&strm->sp.sf->streams, &strm->sp.list_entry);
    pj_mutex_unlock(strm->sp.sf->mutex);

    /* Done */
    strm->base.op = &stream_op;
    *p_vid_strm = &strm->base;
}

&sdl_factory_create_stream


strm->param
strm->sp->pool
strm->sp.sf
strm->sp.vid_cb
strm->sp.list_entry
strm->sp.user_data

----------------------------------
0803C9F0 
PJMEDIA_FRAME_TYPE_NONE
0x0f051ff4
152064
0

192
----------------------------------
0x08038c48
PJMEDIA_FRAME_TYPE_NONE
0x0f051ff4
152064
0
192


// PASS pjmedia_vid_port_get_stream
// ABChecked
/* 
    if (w_p->is_native) {
        XstrmP = pjmedia_vid_port_get_stream(w_p->vp_cap);
    } else {
        XstrmP = pjmedia_vid_port_get_stream(w_p->vp_rend);
    }//
    pj_assert(XstrmP);


    // ABChecked
    if (w->is_native) {
        Xstrm = pjmedia_vid_port_get_stream(w->vp_cap);
    } else {
        Xstrm = pjmedia_vid_port_get_stream(w->vp_rend);
    }
    pj_assert(Xstrm);
    // 这里传递...

    if (w->is_native) {
        if (w_p->is_native) {
            pjmedia_vid_port_pass_sdl_window(w->vp_cap, w_p->vp_cap);
        } else {
            pjmedia_vid_port_pass_sdl_window(w->vp_cap, w_p->vp_rend);
        }
    } else {
        if (w_p->is_native) {
            pjmedia_vid_port_pass_sdl_window(w->vp_rend, w_p->vp_cap);
        } else {
            pjmedia_vid_port_pass_sdl_window(w->vp_rend, w_p->vp_rend);
        }
    }
*/

wid_p = vid_preview_get_win(
    call_med->strm.v.rdr_dev,
    PJ_FALSE);
    
wid = vid_preview_get_win(
    call_med->strm.v.cap_dev, 
    PJ_FALSE);

    // stream              // capturer
    vp_rend                vp_cap
