@class NSString;

@interface RequestPackageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *moduleName;
@property (nonatomic) unsigned int packageType;
@property (nonatomic) unsigned int versionType;

+ (void)initialize;

@end
