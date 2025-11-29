@class NSString, NoticeItem, BaseResponse;

@interface OperationResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (nonatomic) unsigned int minPoundage;
@property (nonatomic) unsigned int maxTransferAmt;
@property (retain, nonatomic) NSString *notice;
@property (retain, nonatomic) NSString *noticeUrl;
@property (retain, nonatomic) NSString *paylistUrl;
@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) unsigned int nameLenLimit;
@property (nonatomic) unsigned int reasonLenLimit;
@property (retain, nonatomic) NoticeItem *noticeItem;

+ (void)initialize;

@end
