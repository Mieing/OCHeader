@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDXPrefetchRequestModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *hashValue;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSArray *appendGlobalProps;
@property (copy, nonatomic) NSDictionary *globalPropsDic;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *extraHeaders;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL needCommonParams;
@property (copy, nonatomic) NSString *globalPropsName;
@property (retain, nonatomic) NSNumber *expireMs;
@property (retain, nonatomic) NSNumber *expireTimestamp;
@property (copy) NSString *fromSchema;
@property (nonatomic) unsigned long long fromType;
@property (copy, nonatomic) NSArray *conditions;
@property (nonatomic) BOOL requestIgnoreCache;
@property (nonatomic) BOOL clearCacheBeforeRequest;
@property (nonatomic) BOOL transferGlobalPropsToString;
@property (nonatomic) BOOL isCustomizedCookie;
@property (nonatomic) unsigned long long streamLoadType;
@property (nonatomic) BOOL enableMemoryCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paramsWithDictionary:(id)a0 schema:(id)a1 allowOtherType:(BOOL)a2;
+ (id)jsonStringToDictionary:(id)a0;
+ (id)headersJSONTransformer;
+ (id)paramsJSONTransformer;
+ (id)conditionsJSONTransformer;
+ (id)extraHeadersJSONTransformer;
+ (id)extraParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (id)prefetchFrom;
- (void)resetHashValue;
- (id)requestConditionMatch;
- (id)fullHeaders;
- (id)fullParams;
- (id)fullData;
- (id)fullParamsForHash;
- (id)fullExtraParams;
- (id)fullHeadersForHash;
- (id)fullExtraHeaders;
- (id)dataDescFromDict:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)calculateHash;

@end
