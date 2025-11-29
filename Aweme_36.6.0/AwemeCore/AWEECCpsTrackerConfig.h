@class NSArray, NSString, AWEECCpsTrackerRetryConfig;

@interface AWEECCpsTrackerConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *reportParamsConfig;
@property (retain, nonatomic) AWEECCpsTrackerRetryConfig *retryConfig;
@property (retain, nonatomic) NSArray *blockList;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) BOOL useNewApi;
@property (nonatomic) BOOL useOldApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reportParamsConfigJSONTransformer;
+ (id)retryConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
