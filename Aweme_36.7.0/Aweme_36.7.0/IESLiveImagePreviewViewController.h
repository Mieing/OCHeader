@class UIScrollView, UIImageView, NSString;

@interface IESLiveImagePreviewViewController : UIViewController <UIScrollViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *closeButton;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) double previousScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewWillBeginZooming:(id)a0 withView:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (id)initWithImageURL:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
