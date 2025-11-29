@class NSString;

@interface AWEHomePagePerfMetricsMonitorTrackLimitModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long time;
@property (nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValid;

@end
