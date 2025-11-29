@class NSString;

@interface AWEHomepageChannelChangePerfMetricsMonitorSceneBaseInfo : NSObject

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *triggerReason;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (nonatomic) double cancelTime;

- (id)sceneIdentification;
- (void).cxx_destruct;
- (id)description;
- (id)propertyDictionary;

@end
