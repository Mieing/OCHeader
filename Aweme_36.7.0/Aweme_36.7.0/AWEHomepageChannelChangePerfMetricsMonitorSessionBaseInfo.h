@class NSString, NSDictionary;

@interface AWEHomepageChannelChangePerfMetricsMonitorSessionBaseInfo : NSObject

@property (copy, nonatomic) NSString *identification;
@property (copy, nonatomic) NSString *session;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSDictionary *fpsRepresentationDictionary;

- (id)propertyDictionaryWithOutFPSRepresentation;
- (void).cxx_destruct;
- (id)description;

@end
