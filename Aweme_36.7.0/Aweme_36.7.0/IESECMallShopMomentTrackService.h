@class IESECMallShopMomentContext, NSString, IESECTracker, IESECQualityInfoV2;

@interface IESECMallShopMomentTrackService : NSObject <IESECMallShopMomentTrackService>

@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECQualityInfoV2 *qualityInfo;
@property (retain, nonatomic) IESECMallShopMomentContext *context;
@property (nonatomic) BOOL hasReportMonitor;
@property (nonatomic) BOOL hasReportMallPerf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)baseParams;
- (void)trackPageShow;
- (void)configBtmTrackerV2;
- (void)reportMonitor;
- (void)trackMallPerfIfNeeded;
- (void)reportNetMetrics:(id)a0 extra:(id)a1;
- (void)trackDestroy;
- (id)getBTM;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
