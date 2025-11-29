@class NSString, UIImageView, UIImage, UIScrollView;

@interface HTSLiveImageCropViewController : UIViewController <UIScrollViewDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGSize { double width; double height; } cropSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancle;
- (id)cropImage;
- (id)initWithImage:(id)a0 completion:(id /* block */)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)dealloc;
- (void)confirm;

@end
