@class NSString;

@interface WidgetInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int widgetType;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;

+ (void)initialize;

@end
