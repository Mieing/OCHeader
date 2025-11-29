@class AWESearchClipSeekElementVIew;

@interface AWEPlayInteractionClipSeekElement : AWEPlayInteractionLeftElement

@property (retain, nonatomic) AWESearchClipSeekElementVIew *clipSeekView;

+ (BOOL)shouldActiveWithModel:(id)a0;

- (void)initializeElement;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)clipSeekButtonClick;
- (void)trackClipSeekButtonEvent:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
