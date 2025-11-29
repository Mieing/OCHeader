@class NSString;

@interface StreamBackupRequest_StreamBackupItem : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSString *format;
@property (nonatomic) unsigned long long alreadyDownloadSizeBytes;

+ (void)initialize;

@end
