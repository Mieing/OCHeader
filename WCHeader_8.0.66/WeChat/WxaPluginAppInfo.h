@class NSString;

@interface WxaPluginAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *pluginAppid;
@property (retain, nonatomic) NSString *customVersion;
@property (nonatomic) unsigned int innerVersion;

+ (void)initialize;

@end
