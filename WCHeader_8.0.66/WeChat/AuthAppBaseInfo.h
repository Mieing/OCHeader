@class NSString;

@interface AuthAppBaseInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appType;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) unsigned int appFlag;
@property (retain, nonatomic) NSString *externInfo;
@property (retain, nonatomic) NSString *authInfo;
@property (retain, nonatomic) NSString *devInfo;

+ (void)initialize;

@end
