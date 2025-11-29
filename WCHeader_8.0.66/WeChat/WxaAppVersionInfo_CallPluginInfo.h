@class NSString, NSMutableArray;

@interface WxaAppVersionInfo_CallPluginInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *pluginId;
@property (nonatomic) unsigned int pluginVersion;
@property (nonatomic) unsigned int innerVersion;
@property (retain, nonatomic) NSString *pluginUserName;
@property (retain, nonatomic) NSString *alias;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableArray *contexts;
@property (retain, nonatomic) NSString *prefixPath;
@property (nonatomic) unsigned int autoUpdate;
@property (nonatomic) unsigned int devKey;
@property (retain, nonatomic) NSString *versionDesc;

+ (void)initialize;

@end
