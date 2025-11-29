@class NSString, AlertItem, BaseResponse;

@interface TransToBankCardPayRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *reqkey;
@property (retain, nonatomic) NSString *transferBillId;
@property (retain, nonatomic) NSString *bankCardTailno;
@property (retain, nonatomic) NSString *payeeName;
@property (retain, nonatomic) NSString *bankName;
@property (retain, nonatomic) AlertItem *alertItem;

+ (void)initialize;

@end
