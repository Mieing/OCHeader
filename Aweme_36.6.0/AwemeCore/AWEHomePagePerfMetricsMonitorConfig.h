@class AWEHomePagePerfMetricsMonitorTrackLimitModel, NSDictionary, NSString;

@interface AWEHomePagePerfMetricsMonitorConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL channelLifeCycleEnable;
@property (nonatomic) BOOL channelFinishLoadEnable;
@property (retain, nonatomic) AWEHomePagePerfMetricsMonitorTrackLimitModel *trackLimitModel;
@property (copy, nonatomic) NSDictionary *eventData;
@property (copy, nonatomic) NSDictionary *sceneEndDispatchTimes;
@property (copy, nonatomic) NSDictionary *monitorEvent;
@property (copy, nonatomic) NSDictionary *monitorScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)trackLimitModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
