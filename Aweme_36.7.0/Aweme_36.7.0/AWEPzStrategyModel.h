@class NSString, NSArray, NSDictionary;

@interface AWEPzStrategyModel : MTLModel <MTLJSONSerializing, AWEPzStrategyModelProtocol>

@property (readonly, copy, nonatomic) NSString *strategyID;
@property (readonly, copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSArray *scopes;
@property (readonly, copy, nonatomic) NSArray *excludedScopes;
@property (readonly, copy, nonatomic) NSDictionary *data;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scopesJSONTransformer;
+ (id)excludedScopesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
