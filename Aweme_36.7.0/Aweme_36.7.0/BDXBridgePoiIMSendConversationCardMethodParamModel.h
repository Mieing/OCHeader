@class NSString, NSDictionary;

@interface BDXBridgePoiIMSendConversationCardMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSDictionary *cardBody;
@property (copy, nonatomic) NSDictionary *sendParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
