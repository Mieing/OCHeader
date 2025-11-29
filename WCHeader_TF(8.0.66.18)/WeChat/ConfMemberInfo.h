@class NSString;

@interface ConfMemberInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int memberid;
@property (retain, nonatomic) NSString *openid;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *callerUsername;
@property (retain, nonatomic) NSString *callerOpenid;

+ (void)initialize;

@end
