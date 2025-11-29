@interface IESLiveInteractDynamicAnimJSBHandler : IESLiveInteractDynamicJSBHandler

- (void)handleAnimation:(id)a0 extra:(id)a1;
- (void)showWebpAnimation:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (id)jsb_update_anim:(id)a0 context:(id)a1;
- (id)jsb_update_request_animate_queue:(id)a0 context:(id)a1;

@end
