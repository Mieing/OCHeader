@class NSString;

@interface ButtonInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *btnText;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *smallTitle;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *miniappUsername;
@property (retain, nonatomic) NSString *miniappPath;
@property (nonatomic) unsigned int clientVersion;

+ (void)initialize;

@end
