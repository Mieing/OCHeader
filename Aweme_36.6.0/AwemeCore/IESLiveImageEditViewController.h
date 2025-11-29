@class UIView, IESLiveImageEditScrollView, UIImage, NSTimer, NSString, CAShapeLayer, UIImageView, UIButton, UIBezierPath;

@interface IESLiveImageEditViewController : UIViewController <UIScrollViewDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double ratio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) double cropRectCornerRadius;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *cropView;
@property (retain, nonatomic) IESLiveImageEditScrollView *scrollView;
@property (retain, nonatomic) UIView *topBarView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *resetButton;
@property (retain, nonatomic) UIBezierPath *path;
@property (retain, nonatomic) CAShapeLayer *cropMask;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (nonatomic) BOOL editing;
@property (retain, nonatomic) NSTimer *resetTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startResetTimer;
- (void)cancelResetTimer;
- (double)scrollViewHeight;
- (id)initWithImage:(id)a0 aspectRatio:(double)a1 completion:(id /* block */)a2;
- (void)setDefaultRatio;
- (void)setupUserInterface;
- (void)calculateCropRect;
- (void)calculateImageView;
- (void)calculateScrollView;
- (void)drawCropViewMask;
- (void)drawBoard;
- (void)scrollViewContentReset;
- (void)setCropEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)cropImageWithImageViewWidth:(double)a0 convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cornerRadius:(double)a2;
- (void)confirmButtonHandler;
- (void)resetButtonHandler;
- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (BOOL)prefersStatusBarHidden;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupScrollView;
- (void)cancelButtonHandler;
- (void)startEditing;
- (void)timerTriggered;
- (void)calculate;

@end
