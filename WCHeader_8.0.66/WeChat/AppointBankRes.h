@class NSString, BankcardElem, BaseResponse;

@interface AppointBankRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) BankcardElem *bankElem;
@property (retain, nonatomic) NSString *encryptData;

+ (void)initialize;

@end
