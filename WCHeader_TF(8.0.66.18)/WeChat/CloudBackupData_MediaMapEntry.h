@class NSString;

@interface CloudBackupData_MediaMapEntry : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *mediaId;
@property (retain, nonatomic) NSString *fileId;
@property (nonatomic) unsigned long long cdnSize;

+ (void)initialize;

@end
