@class IESLivePlayerTrafficMonitorV2, NSString, NSDictionary, IESLivePlayerTrackerConfig, IESLivePlayerController, IESLivePlayerTrafficStatisticMonitor;

@interface IESLiveNewPlayerTVLTracker : NSObject <IESLivePlayerTrafficStatisticMonitorDelegate, IESLivePlayerTrafficMonitorV2Delegate>

@property (copy, nonatomic) id /* block */ reportStateBlock;
@property (copy, nonatomic) NSDictionary *latencyEvent;
@property (nonatomic) unsigned long long startRoomMemory;
@property (copy, nonatomic) NSString *vendorType;
@property (retain, nonatomic) IESLivePlayerTrafficStatisticMonitor *trafficMonitor;
@property (retain, nonatomic) IESLivePlayerTrafficMonitorV2 *trafficMonitorV2;
@property (weak, nonatomic) IESLivePlayerController *player;
@property (retain, nonatomic) IESLivePlayerTrackerConfig *config;
@property (retain, nonatomic) NSDictionary *liveAppBizInfo;
@property (nonatomic) long long realtimeCaeCategory;
@property (copy, nonatomic) id /* block */ trackBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startPlay:(id)a0;
- (void)trackLatency:(double)a0 vendor:(id)a1 sourcePlatform:(id)a2;
- (id)commonValuesHavePerformances:(BOOL)a0;
- (void)playing:(id)a0;
- (void)playStop:(id)a0;
- (void)beforeReport:(id)a0;
- (BOOL)enableUserPictureQualityReport;
- (void)reportUserTone:(id)a0;
- (BOOL)enableUserToneQualityReport;
- (id)convertDataDictFromStr:(id)a0;
- (id)audioInfoEncode:(id)a0 isBefore:(BOOL)a1;
- (id)preProcessedMonitorInfo:(id)a0;
- (void)handleTVLManagerReportEvent:(id)a0;
- (id)onTVLManagerReportWithEventParam:(id)a0;
- (void)trafficStatisticTrackEvent:(id)a0;
- (id)trafficStatisticPlayerInfo;
- (void)onTrafficEvent:(id)a0;
- (id)initWithTrackerConfig:(id)a0 reportStateBlock:(id /* block */)a1;
- (void)resetConfig:(id)a0 reportStateBlock:(id /* block */)a1;
- (id)usedValuesHavePerformances:(BOOL)a0;
- (id)stableTrafficNetInfo;
- (id)usedTrafficNetInfo;
- (void)handleTVLManagerLiveStreamInfoMonitorLog:(id)a0;
- (void).cxx_destruct;
- (id)carrierName;
- (void)resetConfig:(id)a0;

@end
