@class NSString;

@interface MMListenWeAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) BOOL isHls;
@property (nonatomic) BOOL isFile;
@property (retain, nonatomic) NSString *dataUrl;
@property (retain, nonatomic) NSString *webUrl;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) NSString *path;

+ (void)initialize;

@end
