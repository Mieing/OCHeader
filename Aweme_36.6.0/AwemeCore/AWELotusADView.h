@class NSString, CSJNativeExpressAdManager;

@interface AWELotusADView : LynxUI <CSJNativeExpressAdViewDelegate>

@property (copy, nonatomic) NSString *slotId;
@property (retain, nonatomic) CSJNativeExpressAdManager *nativeExpressAdManager;
@property (nonatomic) double adWidth;
@property (nonatomic) double adHeight;
@property (nonatomic) BOOL needLoadData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__2102;
+ (id)__lynx_prop_config__2153;
+ (id)__lynx_prop_config__2194;

- (void)propsDidUpdate;
- (void)nativeExpressAdSuccessToLoad:(id)a0 views:(id)a1;
- (void)nativeExpressAdFailToLoad:(id)a0 error:(id)a1;
- (void)nativeExpressAdViewRenderSuccess:(id)a0;
- (void)nativeExpressAdViewRenderFail:(id)a0 error:(id)a1;
- (void)nativeExpressAdViewWillShow:(id)a0;
- (void)nativeExpressAdViewDidClick:(id)a0;
- (void)nativeExpressAdView:(id)a0 dislikeWithReason:(id)a1;
- (void)startAdSDKServiceIfNeed:(id /* block */)a0;
- (void)configADUserExtData;
- (void)setSlotId:(id)a0 requestReset:(BOOL)a1;
- (void)setAdWidth:(double)a0 requestReset:(BOOL)a1;
- (void)setAdHeight:(double)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (void)loadData;
- (id)createView;

@end
