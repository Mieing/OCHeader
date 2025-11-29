@class NSArray;

@interface AWEIMXBridgeImExchangeAnswerSendMsgMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSArray *sendResult;

+ (id)sendResultJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
