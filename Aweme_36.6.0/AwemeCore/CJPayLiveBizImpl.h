@class BDXBridgeEventSubscriber, CJPayTimerManager, NSString;

@interface CJPayLiveBizImpl : NSObject <AnnieLiveBizCJPayProtocol, BDXServiceProtocol>

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) CJPayTimerManager *timerManager;
@property (nonatomic) BOOL hasLoadURL;
@property (nonatomic) double halfScreenStartTime;
@property (nonatomic) BOOL hasTrackedWalletOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)bindToProtocol;
+ (unsigned long long)serviceType;

- (void)loadURL:(id)a0 container:(id)a1 context:(id)a2;
- (void)subscribeLoadEventWithURL:(id)a0 container:(id)a1;
- (void)loadURL:(id)a0 withContainer:(id)a1;
- (BOOL)canOpenWalletPopupUrlWithContext:(id)a0;
- (void)openWalletPopupUrlWithContext:(id)a0 sessionId:(id)a1;
- (void)trackAndLoadURL:(id)a0 withContainer:(id)a1;
- (void)trackWalletHomepageOpenHalfScreenWalletWithContainer:(id)a0;
- (id)walletPopupUrlFromQueryItems:(id)a0;
- (id)addCommonQueryParametersToURLString:(id)a0 withSessionId:(id)a1;
- (void)trackWalletHomepageOpenHalfScreenPopupWithPopupEntry:(id)a0 popupUrl:(id)a1 queryItems:(id)a2;
- (id)extractUrlFromQueryWithoutParameters:(id)a0;
- (id)extractSchemaComponentsFromUrl:(id)a0;
- (id)extractEnterFromWithQueryItems:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
