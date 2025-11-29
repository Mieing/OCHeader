@class NSString, SKStoreProductViewController, AWEGuideQingTaoPopViewTrackHandler, AWEAwemeModel, UIView, NSMutableArray, BDXBridgeEventSubscriber;
@protocol AWEGuideVideoPopViewProtocol;

@interface AWEGuideQingTaoManager : NSObject <SKStoreProductViewControllerDelegate, BDXHostNavigationProtocol, AWEGuideQingTaoManagerProtocol>

@property (retain, nonatomic) UIView<AWEGuideVideoPopViewProtocol> *popView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEGuideQingTaoPopViewTrackHandler *popViewTracker;
@property (retain, nonatomic) SKStoreProductViewController *preloadViewController;
@property (retain, nonatomic) NSMutableArray *preloadSKStroeViewContainer;
@property (retain, nonatomic) BDXBridgeEventSubscriber *bridgeEventSubscriber;
@property (copy, nonatomic) id /* block */ appStoreCloseAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceCommonAdaperClass;
+ (id)sharedInstance;

- (void)bdxPushViewController:(id)a0 animated:(BOOL)a1;
- (void)bdxPresentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)qingTaoITuneId;
- (id)aAWEFeedModuleServiceCommonAdaper;
- (void)preloadSKStoreView;
- (BOOL)checkAPPIsExist:(id)a0;
- (BOOL)isQingTaoExist;
- (void)openQingTaoApp:(id)a0 defaultSchemeUrl:(id)a1;
- (id)shortZlink;
- (void)downloadQingTaoAPP:(id)a0 completion:(id /* block */)a1;
- (void)showGuideQingTaoAlertWithModel:(id)a0 trackParams:(id)a1 defaultAction:(id /* block */)a2 openAppAction:(id /* block */)a3 closeAction:(id /* block */)a4;
- (id)qingTaoScheme;
- (void)addBridgeEventSubscriberWithCallback:(id /* block */)a0;
- (void)traceOpenAppStore:(id)a0;
- (void)showGuideQingTaoAlertWithModel:(id)a0 trackParams:(id)a1 defaultAction:(id /* block */)a2 closeAction:(id /* block */)a3;
- (void)showYummeDiversionLynxPopView:(id)a0 bridgeSubscriberCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;

@end
