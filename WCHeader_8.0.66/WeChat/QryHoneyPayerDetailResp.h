@class NSString, HoneyPayerDetail, RightCorner, BaseResponse, C2CMsgNode, MoreTransRecord, NSMutableArray, TokeMess, NoticeItem, QryHoneyPayerDetailResp_ModifyCreditlineView;

@interface QryHoneyPayerDetailResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) HoneyPayerDetail *detail;
@property (retain, nonatomic) NSMutableArray *record;
@property (nonatomic) unsigned long long minCreditLine;
@property (nonatomic) unsigned long long maxCreditLine;
@property (retain, nonatomic) RightCorner *rightCorner;
@property (retain, nonatomic) C2CMsgNode *c2Cmsg;
@property (retain, nonatomic) TokeMess *tokeMess;
@property (retain, nonatomic) MoreTransRecord *moreRecords;
@property (retain, nonatomic) NoticeItem *noticeItem;
@property (retain, nonatomic) NSString *selectPaymentAppid;
@property (retain, nonatomic) NSString *selectPaymentSessionid;
@property (retain, nonatomic) NSString *takeMessage;
@property (retain, nonatomic) QryHoneyPayerDetailResp_ModifyCreditlineView *modifyCreditlineView;

+ (void)initialize;

@end
