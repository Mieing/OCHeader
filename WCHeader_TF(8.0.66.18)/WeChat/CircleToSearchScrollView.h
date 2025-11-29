@class CircleToSearchPreviewView, NSString;

@interface CircleToSearchScrollView : MMUIScrollView <UIScrollViewDelegate>

@property (retain, nonatomic) CircleToSearchPreviewView *previewView;
@property (nonatomic) double bottomInset;
@property (nonatomic) double maxBottomInset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedFocusFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateScrollContentInset;
- (void)loadPreviewImage:(id)a0 andFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)updatePreviewImageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andAnimated:(BOOL)a1;
- (void)focusOn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andAnimationDuration:(double)a1;
- (void)centerOnFocusAnimated:(BOOL)a0;
- (void)showFakeOverlayView;
- (void)hideFakeOverlayView;
- (void).cxx_destruct;

@end
