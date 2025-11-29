@class NSString;

@interface BackupDataInfo : WXPBGeneratedMessage

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) NSString *sessionName;

+ (void)initialize;

@end
