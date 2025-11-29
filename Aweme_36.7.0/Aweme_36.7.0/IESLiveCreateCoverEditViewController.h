@class NSString, UIImageView, UIImage, UIScrollView;

@interface IESLiveCreateCoverEditViewController : UIViewController <UIScrollViewDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double ratio;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0 aspectRatio:(double)a1 completion:(id /* block */)a2;
- (id)cropImageWithImageViewWidth:(double)a0 convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)cancel;
- (void)viewWillDisappear:(BOOL)a0;
- (void)confirm;

@end
