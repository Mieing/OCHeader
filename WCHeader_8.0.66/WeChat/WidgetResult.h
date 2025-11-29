@class NSString;

@interface WidgetResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *docId;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *boxInfo;
@property (retain, nonatomic) NSString *iconUrl;

+ (void)initialize;

@end
