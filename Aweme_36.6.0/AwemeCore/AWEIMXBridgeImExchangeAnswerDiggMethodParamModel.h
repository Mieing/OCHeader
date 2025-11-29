@class NSString;

@interface AWEIMXBridgeImExchangeAnswerDiggMethodParamModel : BDXBridgeModel

@property (nonatomic) BOOL isDigg;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *msgId;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
