@class NSDictionary;

@interface IESLiveInteractDynamicUILayoutJSBHandler : IESLiveInteractDynamicJSBHandler

@property (copy, nonatomic) NSDictionary *dynamicLayout;

- (id)configModelWithDictionary:(id)a0 error:(id *)a1;
- (id)jsb_update_reload_layout:(id)a0 context:(id)a1;
- (id)jsb_update_update_layout_config:(id)a0 context:(id)a1;
- (id)jsb_update_update_seatlist_offset:(id)a0 context:(id)a1;
- (id)jsb_update_set_dynamic_ui_features:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
