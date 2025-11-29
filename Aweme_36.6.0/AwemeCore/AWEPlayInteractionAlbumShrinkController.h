@interface AWEPlayInteractionAlbumShrinkController : AWEPlayInteractionNewBaseController <AWEPlayInteractionAlbumShrinkControllerProtocol> {
    void /* unknown type, empty encoding */ containerHeight;
    void /* unknown type, empty encoding */ isPanelShowing;
}

- (void)panelDidDismiss;
- (BOOL)judgeEnable;
- (void)panelDidPresentWithRemainHeight:(double)a0 animationDuration:(double)a1;
- (void)panelDidPresentWithRemainHeight:(double)a0;
- (void)panelDismissProgressDidChange:(double)a0;
- (void)panelDidDismissWithAnimationDuration:(double)a0;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)reset;

@end
