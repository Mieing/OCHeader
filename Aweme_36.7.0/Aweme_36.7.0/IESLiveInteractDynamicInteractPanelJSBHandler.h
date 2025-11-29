@interface IESLiveInteractDynamicInteractPanelJSBHandler : IESLiveInteractDynamicJSBHandler

- (int)currentConnectMode;
- (id)parseEmojiData:(id)a0;
- (void)switchToVideo;
- (void)switchToAudio;
- (void)switchToVirtual;
- (id)jsb_get_interact_panel_config:(id)a0 context:(id)a1;
- (id)jsb_update_edit_mic_position:(id)a0 context:(id)a1;
- (id)jsb_update_fast_match:(id)a0 context:(id)a1;
- (id)jsb_update_open_beauty_panel:(id)a0 context:(id)a1;
- (id)jsb_update_update_enlarge_status:(id)a0 context:(id)a1;
- (id)jsb_update_open_contribution_list_panel:(id)a0 context:(id)a1;
- (id)jsb_update_interact_panel_click:(id)a0 context:(id)a1;
- (BOOL)isAnchor;
- (id)store;

@end
