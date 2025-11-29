@class NSSet, NSMutableDictionary;

@interface BDPKeyMetricsBatchReporter : NSObject

@property (retain, nonatomic) NSMutableDictionary *keyMetricsBatchInfo;
@property (nonatomic) long long rewardedVideoAdCount;
@property (nonatomic) long long interstitialAdCount;
@property (retain, nonatomic) NSSet *reportPointEvents;
@property (nonatomic) BOOL needReport;
@property (nonatomic) BOOL isRealTimeReport;

+ (id)sharedInstance;

- (void)initStatus;
- (void)addPointWithName:(id)a0 event:(id)a1 eventInfo:(id)a2 appID:(id)a3;
- (void)addPointWithName:(id)a0 event:(id)a1 eventInfo:(id)a2 uniqueId:(id)a3;
- (id)addTimeStampIntoEventInfo:(id)a0;
- (void)reportBatchInfoWithUniqueID:(id)a0;
- (id)transEventsToImmutable:(id)a0;
- (id)getVideoOrInterstitialAdReportInfoFrom:(id)a0 pointName:(id)a1;
- (id)getDrawAdReportInfoFrom:(id)a0 pointName:(id)a1;
- (id)getSplashAdReportInfoFrom:(id)a0 pointName:(id)a1;
- (id)getFlowAdReportInfoFrom:(id)a0;
- (id)getPayReportInfoFrom:(id)a0 pointName:(id)a1;
- (void)clearWhenRouteChangeWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
