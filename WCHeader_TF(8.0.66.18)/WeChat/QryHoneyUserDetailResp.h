@class NSString, NoticeItem, DocumentItem, C2CMsgNode, HoneyUserDetail, BaseResponse;

@interface QryHoneyUserDetailResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) HoneyUserDetail *detail;
@property (retain, nonatomic) NSString *helpWord;
@property (retain, nonatomic) NSString *helpUrl;
@property (retain, nonatomic) C2CMsgNode *c2Cmsg;
@property (retain, nonatomic) NoticeItem *noticeItem;
@property (nonatomic) BOOL needSignAgreement;
@property (retain, nonatomic) DocumentItem *signAgreementWording;

+ (void)initialize;

@end
