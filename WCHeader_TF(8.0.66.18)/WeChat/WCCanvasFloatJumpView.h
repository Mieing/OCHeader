@interface WCCanvasFloatJumpView : WCCanvasFloatActionBaseView

@property (readonly, nonatomic) double swipeJumpOffset;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 componentItem:(id)a1 advertiseInfo:(id)a2 orientation:(long long)a3 delegate:(id)a4;
- (void)hideJumpView:(BOOL)a0;
- (void)invokeAutoJump;
- (void)invokeSwipeJump;

@end
