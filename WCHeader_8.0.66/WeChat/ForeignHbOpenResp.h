@class NSString, JumpRemind, RealNameInfo, ForeignHbOperationsInfo, InterceptWin, ForeignHbCurrencyTips, BaseResponse, NSMutableArray;

@interface ForeignHbOpenResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *sendId;
@property (nonatomic) unsigned long long amount;
@property (nonatomic) unsigned int recNum;
@property (nonatomic) unsigned long long recAmount;
@property (nonatomic) unsigned int totalNum;
@property (nonatomic) unsigned long long totalAmount;
@property (nonatomic) unsigned int hbType;
@property (nonatomic) unsigned int isSender;
@property (nonatomic) unsigned int isContinue;
@property (nonatomic) unsigned int receiveStatus;
@property (nonatomic) unsigned int hbStatus;
@property (retain, nonatomic) NSString *statusMess;
@property (retain, nonatomic) NSString *wishing;
@property (retain, nonatomic) NSString *receiveId;
@property (retain, nonatomic) NSString *headTitle;
@property (retain, nonatomic) NSMutableArray *operationHeader;
@property (retain, nonatomic) NSMutableArray *record;
@property (nonatomic) unsigned int jumpChange;
@property (retain, nonatomic) NSString *changeWording;
@property (retain, nonatomic) NSString *sendUserName;
@property (retain, nonatomic) NSString *changeUrl;
@property (retain, nonatomic) RealNameInfo *realNameInfo;
@property (retain, nonatomic) NSString *systemMsgContext;
@property (retain, nonatomic) NSString *sessionUserName;
@property (nonatomic) unsigned int jumpChangeType;
@property (retain, nonatomic) NSString *changeIconUrl;
@property (retain, nonatomic) JumpRemind *jumpRemind;
@property (nonatomic) unsigned int enableAnswerByExpression;
@property (nonatomic) unsigned int enableAnswerBySelfie;
@property (retain, nonatomic) InterceptWin *interceptWin;
@property (retain, nonatomic) NSString *amountDesc;
@property (retain, nonatomic) NSString *amountDescIcon;
@property (retain, nonatomic) ForeignHbCurrencyTips *currencyTips;
@property (retain, nonatomic) ForeignHbOperationsInfo *operationTail;

+ (void)initialize;

@end
