@class NSString, AWEStorage;
@protocol AWEMusicCommerceConfig;

@interface LunaSubscriberAlertManager : NSObject <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) AWEStorage *storage;
@property (nonatomic) BOOL isPopupShowing;
@property (retain, nonatomic) id<AWEMusicCommerceConfig> commerceConfig;
@property (nonatomic) BOOL forbidShowSubscriberPopView;
@property (retain, nonatomic) NSString *lastPlayId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)miniLunaCommerceOn;
+ (id)shared;

- (void)containerWillDestory:(id)a0;
- (void)containerViewControllerViewDidDisAppear:(id)a0;
- (id)p_cacheKey;
- (BOOL)canShowPopupView;
- (BOOL)canPlayerShowSubscriberIntercept:(id)a0;
- (BOOL)needSubscriberIntercept:(id)a0;
- (void)showSubscriberSettleInterceptViewFrom:(id)a0 model:(id)a1 eventParams:(id)a2 completion:(id /* block */)a3 actionBlock:(id /* block */)a4;
- (void)showCommercePopupViewNeedLogin:(BOOL)a0 model:(id)a1 eventParams:(id)a2;
- (id)p_currentDay;
- (void)showCommercePopupViewNeedLogin:(BOOL)a0 model:(id)a1 eventParams:(id)a2 fromType:(id)a3 completion:(id /* block */)a4;
- (id)p_popupUrl;
- (void)playInterceptPopupShowed;
- (void)prefetchLynxPopupView;
- (void).cxx_destruct;
- (void)setup;

@end
