@class NSString, UIImageView, UIScrollView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AWEImagePreviewView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGesture;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) double startAlpha;
@property (nonatomic) BOOL isDragging;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithType:(id)a0 data:(id)a1 inParentView:(id)a2 dismiss:(id /* block */)a3;
- (void)dismissWithoutAnimate;
- (void)animateShow;
- (void)animateHide;
- (void)showWithImage:(id)a0 inParentView:(id)a1 dismiss:(id /* block */)a2;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)dismiss;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutImageView;
- (void)handlePanGesture:(id)a0;
- (void)handleTapGesture:(id)a0;
- (void)handleDoubleTapGesture:(id)a0;
- (void)centerImageView;
- (void)setupGestures;

@end
