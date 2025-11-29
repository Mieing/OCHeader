@class NSString;

@interface CopyStatus : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int fileType;
@property (nonatomic) int status;
@property (retain, nonatomic) NSString *backupFileId;
@property (nonatomic) unsigned long long fileSize;

+ (void)initialize;

@end
