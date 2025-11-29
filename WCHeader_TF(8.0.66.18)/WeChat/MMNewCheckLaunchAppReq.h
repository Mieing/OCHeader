@class BaseRequest, NSString;

@interface MMNewCheckLaunchAppReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *schemeUrl;
@property (nonatomic) unsigned int sourceType;
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
@property (nonatomic) unsigned int requestId;

+ (void)initialize;

@end
