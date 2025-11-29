@class NSString, NSDictionary;

@interface IESForestEventTrackData : NSObject

@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *groupId;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) BOOL isSuccess;
@property (copy, nonatomic) NSDictionary *loaderInfo;
@property (copy) NSDictionary *errorInfo;
@property (copy) NSDictionary *resourceInfo;
@property (copy) NSDictionary *metricInfo;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (readonly, nonatomic) NSDictionary *calculatedMetricInfo;

- (id)extractDataTypeFromURLString:(id)a0;
- (id)monitorGeckoErrorCode:(long long)a0;
- (void)updateMetricInfoWithKey:(id)a0 val:(id)a1;
- (void)printAlog;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 response:(id)a1;

@end
