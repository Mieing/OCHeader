@interface IESLiveInteractDynamicGlobalJSBHandler : IESLiveInteractDynamicJSBHandler

- (id)jsbHandlersClassList;
- (id)jsb_update_select_multi_link_mode_video:(id)a0 context:(id)a1;
- (id)jsb_update_select_multi_link_mode:(id)a0 context:(id)a1;
- (id)jsb_update_prepare_apply:(id)a0 context:(id)a1;
- (id)jsb_update_switch_scene:(id)a0 context:(id)a1;
- (id)jsb_update_audio_asr:(id)a0 context:(id)a1;
- (id)jsb_get_common_get_data:(id)a0 context:(id)a1;
- (id)jsb_update_common_set_data:(id)a0 context:(id)a1;
- (id)jsb_update_perf_strategy:(id)a0 context:(id)a1;

@end
