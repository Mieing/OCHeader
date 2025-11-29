@class NSString, VerifyUserSpamInfo, BaseResponse;

@interface VerifyUserResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *encryptUserName;
@property (retain, nonatomic) VerifyUserSpamInfo *verifyUserSpamInfo;
@property (retain, nonatomic) NSString *ctx;
@property (retain, nonatomic) NSString *antispamTicket;

+ (void)initialize;

@end
