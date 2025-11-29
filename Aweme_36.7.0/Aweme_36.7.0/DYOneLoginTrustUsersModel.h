@class NSString, NSArray, NSDictionary;

@interface DYOneLoginTrustUsersModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *accounts;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
