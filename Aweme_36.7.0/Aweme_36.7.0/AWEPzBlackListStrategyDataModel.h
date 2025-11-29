@class NSArray, NSString;

@interface AWEPzBlackListStrategyDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *whiteScopes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)whiteScopesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
