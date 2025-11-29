@class NSString, AWELongPressSpeedTip;

@interface AWELongPressSpeedTipFullScreenView : UIView <AFDFastSpeedViewProtocol>

@property (retain, nonatomic) AWELongPressSpeedTip *tipsView;
@property (nonatomic) BOOL showToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showViewWithoutBottomAnimation:(id)a0 onView:(id)a1 type:(long long)a2;
- (void)updateSpeedImageViewHidden:(BOOL)a0 tips:(id)a1;
- (void)setBottomDownLockArrowViewHidden:(BOOL)a0;
- (void)updateSpeedLockBottomWithText:(id)a0 Type:(long long)a1;
- (BOOL)ifDragIntoHotArea:(id)a0;
- (void)configReferString:(id)a0 enterFrom:(id)a1;
- (void)setShouldLongPressEnableFastSpeed:(BOOL)a0;
- (void)showAndPlayAnimationOnView:(id)a0 speed:(double)a1 type:(long long)a2;
- (void)addViewAndTriggerHaptic:(id)a0;
- (void)showToastWithText:(id)a0;
- (id)getSpeedBottomView;
- (void)addBottomGradientOverlay;
- (void)removeGradientOverlay;
- (void)showLockHotAreaView:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpViews;

@end
