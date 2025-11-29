@class NSString;

@interface BackupSessionInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int sessionTime;
@property (nonatomic) unsigned int unReadCount;
@property (retain, nonatomic) NSString *userName;

+ (void)initialize;

@end
