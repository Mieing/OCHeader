@class NSString, NSDictionary;

@interface AWEHomepageChannelEnterPerfMetricsMonitorSessionBaseInfo : NSObject

@property (copy, nonatomic) NSString *identification;
@property (copy, nonatomic) NSString *session;
@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) long long channelLoadCount;
@property (nonatomic) BOOL slidingViewWillDecelerate;
@property (nonatomic) BOOL hasUsePreloadModel;
@property (copy, nonatomic) NSString *preloadTriggerType;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL monitorFPS;
@property (retain, nonatomic) NSDictionary *fpsRepresentationDictionary;

- (id)propertyDictionaryWithOutFPSRepresentation;
- (void).cxx_destruct;
- (id)description;

@end
