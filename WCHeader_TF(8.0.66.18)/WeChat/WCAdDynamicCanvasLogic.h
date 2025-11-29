@class WCWeAppBizTempSessionHelper, NSMutableDictionary, ForwardMessageLogicController, SKStoreProductViewController, WCAdWebStoreAnimatedTransitioning, NSString;

@interface WCAdDynamicCanvasLogic : NSObject <ForwardMessageLogicDelegate, WCWeAppBizTempSessionHelperDelegate, WCCommitViewResultDelegate, MMLiteAppGetOfflineResourceExt, SKStoreProductViewControllerDelegate, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) NSMutableDictionary *pageInfoCache;
@property (retain, nonatomic) WCWeAppBizTempSessionHelper *bizSessionHelper;
@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (retain, nonatomic) SKStoreProductViewController *productViewController;
@property (retain, nonatomic) WCAdWebStoreAnimatedTransitioning *webStoreAnimatedTransitioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initData;
- (id)getPageInfoFromCache:(id)a0;
- (void)setPageInfoToCache:(id)a0 cacheKey:(id)a1;
- (void)removePageInfoFromCache:(id)a0;
- (void)jumpToWeAppBizTempSessionWithInfo:(id)a0;
- (void)shareToFriend:(id)a0 shareTitle:(id)a1 shareDesc:(id)a2 shareThumbUrl:(id)a3 shareWebUrl:(id)a4;
- (void)shareToTimeline:(id)a0 shareTitle:(id)a1 shareDesc:(id)a2 shareThumbUrl:(id)a3 shareWebUrl:(id)a4;
- (id)genUploadTask:(id)a0 shareTitle:(id)a1 shareDesc:(id)a2 shareThumbUrl:(id)a3 shareWebUrl:(id)a4;
- (BOOL)showEmbeddedWebStore:(id)a0 currentVC:(id)a1 appUrl:(id)a2 viewHeight:(double)a3 skAdItem:(id)a4;
- (void)hideEmbeddedWebStore;
- (void)downgradeInPageSheetStyle:(id)a0;
- (void)productViewControllerDidFinish:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)getCurrentViewController;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)forwardViewController:(id)a0 didFinishForwardingWithDataItem:(id)a1;
- (void)forwardViewControllerDidCancel:(id)a0;
- (void)startBizTempSessionLoadingView;
- (void)stopBizTempSessionLoadingView;
- (void)bizTempSessionJumpWithSuccess:(id)a0;
- (void)bizTempSessionEndWithSuccess:(id)a0;
- (void)bizTempSessionEndWithError:(id)a0;
- (id)getOfflineResource:(id)a0 tag:(id)a1 url:(id)a2;
- (void).cxx_destruct;

@end
