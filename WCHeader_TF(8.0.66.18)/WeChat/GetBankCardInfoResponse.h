@class NSString, BaseResponse;

@interface GetBankCardInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSString *encryptBankCardId1;
@property (retain, nonatomic) NSString *encryptBankCardId2;

+ (void)initialize;

@end
