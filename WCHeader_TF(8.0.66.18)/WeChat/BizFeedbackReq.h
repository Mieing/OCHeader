@class BaseRequest, NSString, BizFeedbackReq_CardFeedbackMsg, BizFeedbackReq_AppMsgFeedbackMsg, NSMutableArray, BizFeedbackReq_BizFeedbackMsg;

@interface BizFeedbackReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *bizInfo;
@property (nonatomic) unsigned int cardType;
@property (nonatomic) unsigned int style;
@property (retain, nonatomic) NSString *event;
@property (nonatomic) unsigned long long recId;
@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) BizFeedbackReq_CardFeedbackMsg *cardFeedbackInfo;
@property (retain, nonatomic) BizFeedbackReq_BizFeedbackMsg *bizFeedbackInfo;
@property (retain, nonatomic) BizFeedbackReq_AppMsgFeedbackMsg *appMsgFeedbackInfo;
@property (retain, nonatomic) NSString *expType;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

@end
