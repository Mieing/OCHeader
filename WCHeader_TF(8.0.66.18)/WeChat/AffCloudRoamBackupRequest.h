@class NSMutableArray;

@interface AffCloudRoamBackupRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *conversationList;
@property (nonatomic) BOOL isAutoBackup;
@property (nonatomic) unsigned long long estimatedSize;
@property (nonatomic) BOOL forceFullDiff;

+ (void)initialize;

@end
