@class NSString, WarningNotice, BaseResponse;

@interface CheckBankBindRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *bankCardSeqno;
@property (retain, nonatomic) NSString *bankCardTailno;
@property (retain, nonatomic) NSString *payeeName;
@property (retain, nonatomic) NSString *encryptData;
@property (retain, nonatomic) WarningNotice *noticeItem;

+ (void)initialize;

@end
