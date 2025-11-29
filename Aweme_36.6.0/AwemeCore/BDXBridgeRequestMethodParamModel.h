@class NSString, NSDictionary, NSNumber;

@interface BDXBridgeRequestMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL addCommonParams;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (retain, nonatomic) id body;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *header;
@property (retain, nonatomic) NSNumber *useUIThread;
@property (retain, nonatomic) NSNumber *usePrefetch;
@property (retain, nonatomic) NSNumber *isCustomizedCookie;
@property (nonatomic) unsigned long long streamLoadType;
@property (copy, nonatomic) NSString *streamSessionId;
@property (nonatomic) long long bodyType;

+ (id)requiredKeyPaths;
+ (id)bodyTypeJSONTransformer;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;

- (id)convertPrefetchRequestModel;
- (void).cxx_destruct;

@end
