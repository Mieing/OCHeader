@class NSMutableDictionary, GameSKStoreDelgeate, GameAppStorePreloadItem, MMUIViewController;
@protocol WXCustomWebViewControllerProtocol;

@interface GameSkStoreController : NSObject

@property (retain, nonatomic) NSMutableDictionary *preloadItemDictInfo;
@property (retain, nonatomic) GameSKStoreDelgeate *currentSkStoreModel;
@property (retain, nonatomic) GameAppStorePreloadItem *currentShowStoreItem;
@property (nonatomic) double showStimeStamp;
@property (nonatomic) BOOL enableStatusCheck;
@property (weak, nonatomic) MMUIViewController<WXCustomWebViewControllerProtocol> *webViewController;

- (id)init;
- (void)cleanPreloadProdctVc;
- (void)cleaAllSkStoreValue;
- (void)preloadSKStoreProductViewController:(id)a0 reportInfo:(id)a1;
- (void)report12909AppStoreWithAction:(long long)a0 item:(id)a1;
- (void)report12909AppStoreWithAction:(long long)a0 item:(id)a1 extInfo:(id)a2;
- (id)createSKStoreProductItem:(id)a0 reportInfo:(id)a1;
- (void)triggerAppStoreItemLoad:(id)a0;
- (id)getSKStoreProductItem:(id)a0 reportInfo:(id)a1;
- (void)searchStoreViewDisplayLink:(id)a0;
- (id)searchStoreViewInView:(id)a0;
- (id)presentAppStoreWithParam:(id)a0 onCloseBlock:(id /* block */)a1;
- (id)getHostVC;
- (BOOL)getPopWhenDismiss:(id)a0;
- (void)checkAppStorePageStatus;
- (void)reportStayDurationWithActionId:(id)a0;
- (void)onStoreVcClosed:(id)a0;
- (void)notifyWebViewEvent:(id)a0 appStoreItem:(id)a1;
- (id)halfScreenTestParamWithAppInstallUrl:(id)a0;
- (void)reportAppStoreCloseOrEnterBackGround;
- (void)onApplicationDidEnterBackground:(id)a0;
- (void)reportProfile:(unsigned int)a0 withTime:(unsigned int)a1 status:(int)a2;
- (void).cxx_destruct;

@end
