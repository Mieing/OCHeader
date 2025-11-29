@class ForeignHbCurrencyTips, NSString, ForeignHbOperationsInfo, NSMutableArray, BaseResponse;

@interface ForeignHbDetailResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned int recNum;
@property (nonatomic) unsigned int totalNum;
@property (nonatomic) unsigned long long totalAmount;
@property (retain, nonatomic) NSString *sendId;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) NSString *wishing;
@property (nonatomic) unsigned int isSender;
@property (retain, nonatomic) NSString *receiveId;
@property (retain, nonatomic) NSMutableArray *operationHeader;
@property (nonatomic) unsigned int hbType;
@property (nonatomic) unsigned int isContinue;
@property (nonatomic) unsigned int hbStatus;
@property (nonatomic) unsigned int receiveStatus;
@property (retain, nonatomic) NSString *statusMess;
@property (retain, nonatomic) NSString *headTitle;
@property (nonatomic) unsigned int hbKind;
@property (nonatomic) unsigned long long recAmount;
@property (retain, nonatomic) NSMutableArray *record;
@property (retain, nonatomic) ForeignHbOperationsInfo *operationTail;
@property (nonatomic) unsigned int jumpChange;
@property (retain, nonatomic) NSString *changeWording;
@property (retain, nonatomic) NSString *sendUserName;
@property (retain, nonatomic) NSString *changeUrl;
@property (nonatomic) unsigned int jumpChangeType;
@property (retain, nonatomic) NSString *changeIconUrl;
@property (nonatomic) unsigned int enableAnswerByExpression;
@property (nonatomic) unsigned int enableAnswerBySelfie;
@property (retain, nonatomic) NSString *amountDesc;
@property (retain, nonatomic) NSString *amountDescIcon;
@property (retain, nonatomic) ForeignHbCurrencyTips *currencyTips;

+ (void)initialize;

@end
