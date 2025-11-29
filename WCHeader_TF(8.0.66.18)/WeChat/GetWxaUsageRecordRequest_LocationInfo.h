@interface GetWxaUsageRecordRequest_LocationInfo : WXPBGeneratedMessage

@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (nonatomic) double posAccuracy;
@property (nonatomic) unsigned long long cacheTimeMs;

+ (void)initialize;

@end
