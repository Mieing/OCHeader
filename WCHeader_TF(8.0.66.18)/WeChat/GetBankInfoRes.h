@class NSString, BankcardElem, BaseResponse;

@interface GetBankInfoRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) BankcardElem *bankElem;

+ (void)initialize;

@end
