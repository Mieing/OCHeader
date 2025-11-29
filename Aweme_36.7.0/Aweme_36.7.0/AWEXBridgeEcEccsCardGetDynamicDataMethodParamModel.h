@class NSString, NSDictionary;

@interface AWEXBridgeEcEccsCardGetDynamicDataMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *messageUUID;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSDictionary *body;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *header;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
