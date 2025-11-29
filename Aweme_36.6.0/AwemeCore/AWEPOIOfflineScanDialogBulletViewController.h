@class NSString, NSDictionary, UIView, NSMutableArray;
@protocol BDXViewContainerProtocol;

@interface AWEPOIOfflineScanDialogBulletViewController : UIViewController <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bulletView;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)loadUrl:(id)a0;
- (id)initWithParams:(id)a0 url:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
