@class NSArray, NSDictionary, NSString;

@interface IESECListKitAPIConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *firstScreenAPIs;
@property (copy, nonatomic) NSArray *refreshAPIs;
@property (copy, nonatomic) NSArray *loadMoreAPIs;
@property (copy, nonatomic) NSArray *clientAiPrefetchAPIs;
@property (copy, nonatomic) NSArray *clientAiFirstScreenAPIs;
@property (copy, nonatomic) NSArray *requireClientVersionAPIs;
@property (copy, nonatomic) NSArray *loginStateChangeAPIs;
@property (copy, nonatomic) NSDictionary *apiDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)apiDictJSONTransformer;
+ (id)requireClientVersionAPIsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)rearrangeAPIConfig;
- (void).cxx_destruct;

@end
