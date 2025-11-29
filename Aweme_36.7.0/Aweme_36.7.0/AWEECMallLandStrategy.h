@class NSString, NSDictionary, NSTimer, NSDate, AWEECMallDeliveryTransitionInfo;
@protocol AWEECMallLandStrategyDelegate;

@interface AWEECMallLandStrategy : NSObject <AWEECMallLandStrategyProtocol, AWEECMallDeliveryOuterContextProvider, IESECDeliveryMallVisibleDelegate>

@property (weak, nonatomic) id<AWEECMallLandStrategyDelegate> delegate;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (copy, nonatomic) NSDictionary *strategyConfig;
@property (nonatomic) BOOL willNAStraightOut;
@property (nonatomic) long long pageType;
@property (retain, nonatomic) NSTimer *lazyLoadTimer;
@property (nonatomic) double deliveryLazyLoadTime;
@property (retain, nonatomic) NSDate *schemaOpenDate;
@property (copy, nonatomic) NSString *mallBTMD;
@property (copy, nonatomic) NSString *deliverySessionID;
@property (nonatomic) BOOL deliveryDelay;
@property (retain, nonatomic) AWEECMallDeliveryTransitionInfo *transitionInfo;
@property (nonatomic) BOOL hasDeliveried;
@property (nonatomic) double eventBlockTime;
@property (nonatomic) BOOL didMallLoaded;
@property (nonatomic) BOOL needOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestMallDeliverySchema:(id)a0;
+ (id)getTabKitSchemaWithDeliveryParams:(id)a0 monitorParams:(id)a1 deliveryHost:(id)a2;
+ (id)getSchemaPageURLWithParams:(id)a0 monitorParams:(id)a1 deliveryHost:(id)a2;
+ (id)xtabMallPageName;
+ (id)xtabMallEnterFrom;
+ (id)getHistoryPath:(id)a0 enterFrom:(id)a1 historyPathLimit:(long long)a2;
+ (id)addHistoryPathForSchema:(id)a0 contextQuery:(id)a1;
+ (BOOL)isWebcastPopupSchema:(id)a0;
+ (id)getBTMD:(id)a0 params:(id)a1;

- (id)initWithParams:(id)a0 delegate:(id)a1;
- (void)tryOpenDeliveryPage;
- (id)getDeliveryParams;
- (void)notiDeliveryEventBlockEnd;
- (void)trackBackAgain;
- (void)trackLazyReloadWithType:(long long)a0;
- (void)openWithTransitionInfoIfNeed:(id)a0;
- (unsigned long long)mallResVersion;
- (BOOL)mallVisible;
- (id)hostVc;
- (id)zoomTransitionStartViewToInner:(BOOL)a0;
- (void)stopLazyTimer;
- (void)handleDeliveryStrategy;
- (void)realOpenDeliveryPage;
- (id)deliveryMonitorParams;
- (void)tryReloadMallWithReason:(long long)a0;
- (void)notiDeliveryRecordIsSuccess:(BOOL)a0;
- (void)trackMallHandleStatWithSchema:(id)a0;
- (void)startTimerForLoad;
- (void).cxx_destruct;
- (void)dealloc;

@end
