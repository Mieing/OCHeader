@class NSString;

@interface CdnBackupDownload : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *downloadPath;
@property (retain, nonatomic) NSString *aeskey;
@property (retain, nonatomic) NSString *fileId;
@property (nonatomic) int fileType;
@property (nonatomic) unsigned long long fileSize;

+ (void)initialize;

@end
