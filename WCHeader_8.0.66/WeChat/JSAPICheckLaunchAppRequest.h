@class BaseRequest, NSString;

@interface JSAPICheckLaunchAppRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *launchappAppid;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *schemeUrl;
@property (nonatomic) unsigned int alertType;
@property (nonatomic) unsigned int sourceType;
@property (nonatomic) unsigned int operateDirectly;
@property (retain, nonatomic) NSString *installSchemeUrl;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) NSString *srcWebCompt;
@property (nonatomic) unsigned int requestId;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *msgUsername;
@property (retain, nonatomic) NSString *msgId;
@property (nonatomic) unsigned int contentType;
@property (nonatomic) unsigned int appmsgInnerType;
@property (nonatomic) unsigned int secCtrlMode;
@property (nonatomic) unsigned int userTouchActionFlag;
@property (nonatomic) unsigned long long timespanFromTouchToLaunch;
@property (nonatomic) unsigned int userTouchLocationX;
@property (nonatomic) unsigned int userTouchLocationY;

+ (void)initialize;

@end
