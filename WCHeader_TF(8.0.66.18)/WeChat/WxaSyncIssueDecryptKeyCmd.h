@class NSString, WxaSyncBaseCmd;

@interface WxaSyncIssueDecryptKeyCmd : WXPBGeneratedMessage

@property (retain, nonatomic) WxaSyncBaseCmd *base;
@property (retain, nonatomic) NSString *decryptKey;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *md5;

+ (void)initialize;

@end
