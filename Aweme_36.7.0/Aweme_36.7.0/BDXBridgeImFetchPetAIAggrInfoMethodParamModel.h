@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeImFetchPetAIAggrInfoMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSNumber *isSyncData;
@property (copy, nonatomic) NSDictionary *body;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
