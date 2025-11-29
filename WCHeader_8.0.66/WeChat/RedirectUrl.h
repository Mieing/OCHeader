@class NSString;

@interface RedirectUrl : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *buttonName;

+ (void)initialize;

@end
