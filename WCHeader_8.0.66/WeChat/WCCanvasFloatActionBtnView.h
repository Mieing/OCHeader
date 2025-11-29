@class NSString;

@interface WCCanvasFloatActionBtnView : WCCanvasFloatActionBaseView <CAAnimationDelegate>

@property (nonatomic) BOOL isDisappearing;
@property (nonatomic) BOOL didAppearFirstTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 componentItem:(id)a1 advertiseInfo:(id)a2 orientation:(long long)a3 delegate:(id)a4;
- (id)fetchComponentId;
- (BOOL)shouldShowActionViewWithOffsetY:(double)a0 tableHeight:(double)a1 contentHeight:(double)a2;
- (void)setActionViewHidden:(BOOL)a0 animation:(BOOL)a1;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
