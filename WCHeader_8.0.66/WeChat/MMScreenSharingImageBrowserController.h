@class NSArray, ImageScrollView;

@interface MMScreenSharingImageBrowserController : MMUIViewController

@property (copy, nonatomic) NSArray *imageURLs;
@property (retain, nonatomic) ImageScrollView *imageView;
@property (nonatomic) double contentRatioY;

- (id)initWithImageURLs:(id)a0;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)layoutImageViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
