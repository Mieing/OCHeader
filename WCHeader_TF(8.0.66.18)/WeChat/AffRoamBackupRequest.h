@class NSMutableArray;

@interface AffRoamBackupRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *conversationList;
@property (nonatomic) BOOL isAutoBackup;
@property (nonatomic) unsigned long long estimatedSize;

+ (void)initialize;

@end
