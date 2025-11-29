@class BaseRequest, NSString, NSData, SessionStat, NSMutableArray, SettingPageInfo;

@interface ClickCommandRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int clickType;
@property (retain, nonatomic) NSString *clickInfo;
@property (retain, nonatomic) NSString *bizUserName;
@property (retain, nonatomic) NSString *msgSource;
@property (retain, nonatomic) NSMutableArray *msgReport;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int sessionid;
@property (retain, nonatomic) SessionStat *sessionStat;
@property (retain, nonatomic) SettingPageInfo *settingPageInfo;
@property (retain, nonatomic) NSString *searchClickId;
@property (retain, nonatomic) NSData *cookie;

+ (void)initialize;

@end
