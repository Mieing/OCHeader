@class NSString;

@interface WidgetVersionInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int appVersion;
@property (retain, nonatomic) NSString *widgetVersionMd5;
@property (retain, nonatomic) NSString *searchWidgetVersionMd5;

+ (void)initialize;

@end
