@interface IESLiveInteractDynamicSeatAnimateJSBHandler : IESLiveInteractDynamicJSBHandler

- (void)handleSeatAnimateJSBParams:(id)a0 seats:(id)a1;
- (void)callFinishSeatAnimate:(id)a0;
- (id)viewForItemID:(id)a0 seats:(id)a1;
- (void)enumeratePositionItems:(id)a0 seats:(id)a1 usingBlock:(id /* block */)a2;
- (id)jsb_update_seat_animate:(id)a0 context:(id)a1;

@end
