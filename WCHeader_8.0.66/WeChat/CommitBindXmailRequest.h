@class BaseRequest, NSString;

@interface CommitBindXmailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int bindType;
@property (retain, nonatomic) NSString *secPwd;
@property (retain, nonatomic) NSString *mailAddr;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *secPwdEncrypt;

+ (void)initialize;

@end
