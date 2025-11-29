@class NSString, AWEAwemeModel;

@interface AWESpecialCardMonitor : NSObject <AWESpecialCardMonitorProtocol>

@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) AWEAwemeModel *lastTrackSpecialCardModel;
@property (nonatomic) double specialCardStartUpdateTime;
@property (nonatomic) unsigned long long currentLoadStatus;
@property (nonatomic) double containerUpdateDuration;
@property (nonatomic) double panelViewInitDuration;
@property (nonatomic) double panelViewUpdateDuration;
@property (nonatomic) double lynxContainerLoadDuration;
@property (nonatomic) double feLoadDataDuration;
@property (nonatomic) unsigned long long onScreenLoadStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackEvent:(id)a0 withParams:(id)a1;
+ (BOOL)enableTrackFeedCardTemplateUpdatePerf;
+ (BOOL)enableTrackFeedCardTemplateScrollPerf;
+ (id)specialCardFPSSceneName:(id)a0;
+ (void)trackFeedCardTemplateInitPerf:(double)a0 referString:(id)a1;
+ (BOOL)enableTrackFeedCardTemplateInitPerf;

@end
