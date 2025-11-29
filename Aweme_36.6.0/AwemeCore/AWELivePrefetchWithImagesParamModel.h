@class NSString, NSDictionary;

@interface AWELivePrefetchWithImagesParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *ecPreloadConfig;
@property (copy, nonatomic) NSString *imageConfigTag;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (nonatomic) BOOL forceFetch;
@property (nonatomic) BOOL ignoreCache;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *headers;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) BOOL numToString;
@property (copy, nonatomic) NSDictionary *FilterKeys;
@property (nonatomic) BOOL enableTiming;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
