@class DVEVCContext, DVEVideoToolBar;
@protocol DVEFullScreenProtocol;

@interface DVEControlBarViewController : UIViewController

@property (weak, nonatomic) DVEVCContext *vcContext;
@property (retain, nonatomic) DVEVideoToolBar *toolview;
@property (weak, nonatomic) id<DVEFullScreenProtocol> delegate;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
