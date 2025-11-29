@class AWEPaidStreamIAAPreloadConfig;
@protocol AWEPaidIAAPayment;

@interface AWEPaidStreamIAAPreloadManager : NSObject

@property (retain, nonatomic) id<AWEPaidIAAPayment> preloadedIAAPayment;
@property (retain, nonatomic) AWEPaidStreamIAAPreloadConfig *config;
@property (nonatomic) double preloadedIAAPaymentTimestamp;
@property (nonatomic) BOOL isPreloadRequesting;

+ (id)sharedInstance;

- (void)preloadIAAPaymentWithConfig:(id)a0;
- (id)preloadedIAAPaymentForConfig:(id)a0;
- (void)removePreloadedIAAPayment;
- (BOOL)enablePreloadForConfig:(id)a0;
- (BOOL)isAdvertisingPlacementPlayletForConfig:(id)a0;
- (BOOL)isAutoUnlockNextInInnerFeedSceneForConfig:(id)a0;
- (BOOL)enablePreloadForAdvertisingPlacementWithConfig:(id)a0;
- (BOOL)enableUsePreloadedIAAPaymentForAdvertisingPlacementWithConfig:(id)a0;
- (BOOL)businessInfoIsTheSameForConfig:(id)a0 andAnotherConfig:(id)a1;
- (void)traceWithEventName:(id)a0 preloadConfig:(id)a1 parameters:(id)a2;
- (id)playletIAAPreloadConfig;
- (id)enablePreloadEnterFroms;
- (void).cxx_destruct;

@end
