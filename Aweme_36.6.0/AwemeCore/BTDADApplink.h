@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface BTDADApplink : NSObject

@property BOOL hasEnterBackground;
@property (copy, nonatomic) NSArray *whiteList;
@property (copy, nonatomic) NSArray *intercepters;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSArray *appstoreSchemeList;
@property (nonatomic) BOOL enableReviseData;
@property (nonatomic) BOOL disenableHttpUniversalLink;
@property (nonatomic) BOOL disableSuccessMonitor;
@property (nonatomic) BOOL enableTestAlert;

+ (BOOL)isToAppStoreRequestURLStr:(id)a0 model:(id)a1;
+ (id)sharedInstance;

- (void)sdkSessionLaunchMonitor;
- (id)mmkv;
- (void)onAppDidEnterBackground:(id)a0;
- (BOOL)isUniversalLinkWithOpenUrl:(id)a0;
- (BOOL)openURLWithModel:(id)a0 event:(id)a1 backUrlModel:(id /* block */)a2 customEventLabel:(id /* block */)a3 callback:(id /* block */)a4 customScene:(id)a5;
- (BOOL)openWeChatMiniProgram:(id)a0 event:(id)a1 backUrlModel:(id /* block */)a2 customEventLabel:(id /* block */)a3 wechatCallback:(id /* block */)a4 callback:(id /* block */)a5 customScene:(id)a6;
- (BOOL)handleAppDelegateOpenURL:(id)a0;
- (void)handleApplicationDidBecomeActiveNotification:(id)a0;
- (void)addAppRuntimeObservers;
- (void)setUpIntercepters;
- (void)showAlertWithString:(id)a0;
- (void)eventWithModel:(id)a0 event:(id)a1 backUrl:(id)a2 label:(id)a3 result:(unsigned long long)a4 updateEvent:(id /* block */)a5;
- (void)monitorWithService:(id)a0 model:(id)a1 event:(id)a2 backUrl:(id)a3 realBackUrl:(id)a4 errorCode:(long long)a5 result:(unsigned long long)a6;
- (id)dataWithCid:(id)a0 logExtra:(id)a1 precise:(BOOL)a2;
- (id)replaceBackURLWithCreativeID:(id)a0 model:(id)a1 backUrlModel:(id)a2 timeStamp:(double)a3;
- (BOOL)isValidDeepLinkWithOpenUrl:(id)a0 model:(id)a1;
- (id)backUrlParameterWithModel:(id)a0 event:(id)a1 backUrlModel:(id)a2 customLabel:(id)a3;
- (BOOL)containsScheme:(id)a0;
- (void)monitorOpenUrlAppWithModel:(id)a0 result:(unsigned long long)a1 type:(unsigned long long)a2;
- (void)storeBackUrlParameter:(id)a0 backUrl:(id)a1;
- (void)eventWithWechatModel:(id)a0 event:(id)a1 label:(id)a2 result:(unsigned long long)a3;
- (void)showOpenWechatAlert:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
