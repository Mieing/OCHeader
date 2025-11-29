@class NSString, NSDictionary, UIView;
@protocol BDXViewContainerProtocol;

@interface AWEOPSceneAuthBulletVC : UIViewController <BDXContainerLifecycleProtocol>

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSDictionary *queryDict;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dux_backAction;
- (void)configNavBar;
- (void)loadURLString:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
