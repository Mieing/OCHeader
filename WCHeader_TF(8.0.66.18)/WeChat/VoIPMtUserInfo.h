@class NSString;

@interface VoIPMtUserInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *voipsdkUsername;
@property (nonatomic) unsigned int errcode;

+ (void)initialize;

@end
