@class NSString;

@interface BDXBridgeImForwardMsgMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *msgId;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *scene;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
