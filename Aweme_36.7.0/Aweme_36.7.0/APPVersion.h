@class NSString;

@interface APPVersion : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *developer;
@property (copy, nonatomic) NSString *versionCode;
@property (copy, nonatomic) NSString *updateTime;
@property (copy, nonatomic) NSString *appDownloadLink;
@property (copy, nonatomic) NSString *exeName;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) long long engineType;

+ (id)descriptor;

@end
