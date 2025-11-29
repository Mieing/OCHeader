@class NSString;

@interface StoreWXaRedirectInfoItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int appid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *redirectUrl;

+ (void)initialize;

@end
