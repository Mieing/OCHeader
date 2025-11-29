@class NSString, NSDictionary;

@interface BDXBridgeSetBulletContentStorageMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *messageUuid;
@property (copy, nonatomic) NSString *bulletContent;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
