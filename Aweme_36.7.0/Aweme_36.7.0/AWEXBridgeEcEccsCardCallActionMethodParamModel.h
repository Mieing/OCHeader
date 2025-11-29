@class NSString, NSDictionary;

@interface AWEXBridgeEcEccsCardCallActionMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *messageUUID;
@property (copy, nonatomic) NSString *template;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSDictionary *eventParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
