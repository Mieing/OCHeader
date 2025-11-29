@class NSString, UIImageView, UIImage, UIView, UIViewController;

@interface MMBasePeekImageViewController : UIViewController <WCForceTouchPopProtocol> {
    UIImage *_image;
    id _delegate;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (weak, nonatomic) UIViewController *previewFromController;
@property (weak, nonatomic) UIView *previewSourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0 delegate:(id)a1;
- (void)reloadImage:(id)a0;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (BOOL)canPop;
- (void)commitViewController;
- (void).cxx_destruct;

@end
