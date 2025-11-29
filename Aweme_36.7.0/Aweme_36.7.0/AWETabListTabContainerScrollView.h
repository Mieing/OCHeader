@class NSString, AWETabListTabMagicPanGestureRecognizer;

@interface AWETabListTabContainerScrollView : UIScrollView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWETabListTabMagicPanGestureRecognizer *magicPanGestureRecognizer;
@property (nonatomic) BOOL enableGestureRecognizerControl;
@property (nonatomic) BOOL disableManualPan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)magicPan;
- (BOOL)isScrollingTabContentWithGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)willMoveToSuperview:(id)a0;

@end
