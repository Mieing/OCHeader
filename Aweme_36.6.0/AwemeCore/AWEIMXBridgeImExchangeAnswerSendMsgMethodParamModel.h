@class NSString, NSArray, NSDictionary;

@interface AWEIMXBridgeImExchangeAnswerSendMsgMethodParamModel : BDXBridgeModel

@property (copy, nonatomic) NSString *question;
@property (copy, nonatomic) NSString *bg_color;
@property (copy, nonatomic) NSString *bg_id;
@property (copy, nonatomic) NSString *answer;
@property (copy, nonatomic) NSString *answer_req_id;
@property (copy, nonatomic) NSString *answer_uuid;
@property (copy, nonatomic) NSString *entrance;
@property (copy, nonatomic) NSString *enter_from;
@property (copy, nonatomic) NSString *enter_method;
@property (retain, nonatomic) NSArray *send_conversations;
@property (retain, nonatomic) NSArray *send_users;
@property (copy, nonatomic) NSDictionary *ext;
@property (nonatomic) long long action;

+ (id)requiredKeyPaths;
+ (id)send_conversationsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
