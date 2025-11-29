@class NSString;

@interface AWEHomepageChannelEnterPerfMetricsMonitorSceneBaseInfo : NSObject

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *triggerReason;
@property (nonatomic) double fpsBeginTime;
@property (nonatomic) double beginTime;
@property (copy, nonatomic) NSString *fromChannelId;
@property (copy, nonatomic) NSString *toChannelId;
@property (nonatomic) double endTime;
@property (nonatomic) double cancelTime;

- (void).cxx_destruct;
- (id)description;
- (id)propertyDictionary;

@end
