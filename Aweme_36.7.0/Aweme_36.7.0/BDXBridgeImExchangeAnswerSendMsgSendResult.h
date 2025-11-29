@class NSString;

@interface BDXBridgeImExchangeAnswerSendMsgSendResult : BDXBridgeModel

@property (copy, nonatomic) NSString *msgId;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *conversationId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
