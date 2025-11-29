@class NSString;

@interface GetWidgetAppVersionInfoResp_AppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *searchwidgetversionmd5;
@property (retain, nonatomic) NSString *downloadurl;

+ (void)initialize;

@end
