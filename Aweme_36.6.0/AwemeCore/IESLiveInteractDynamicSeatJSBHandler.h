@interface IESLiveInteractDynamicSeatJSBHandler : IESLiveInteractDynamicJSBHandler

- (void)handleSeatElementJSBParams:(id)a0;
- (void)handleSeatItem:(id)a0 type:(id)a1;
- (id)jsb_update_seat:(id)a0 context:(id)a1;
- (id)jsb_get_seat:(id)a0 context:(id)a1;

@end
