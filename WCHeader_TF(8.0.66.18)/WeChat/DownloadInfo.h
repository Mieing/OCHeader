@class NSString, YYB;

@interface DownloadInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *downloadUrl;
@property (retain, nonatomic) NSString *androidApkMd5;
@property (retain, nonatomic) NSString *googlePlayDownloadUrl;
@property (retain, nonatomic) YYB *yyb;
@property (nonatomic) unsigned int downloadFlag;
@property (nonatomic) unsigned int androidApkSize;
@property (retain, nonatomic) NSString *alternativeDownloadUrl;
@property (nonatomic) unsigned int downloaderType;

+ (void)initialize;

@end
