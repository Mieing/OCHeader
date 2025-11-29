@class NSString, BackupStartGeneralInfo;

@interface BackupStartResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic) int status;
@property (nonatomic) unsigned int networkState;
@property (nonatomic) unsigned long long bigDataSize;
@property (retain, nonatomic) BackupStartGeneralInfo *generalInfo;
@property (nonatomic) int transferType;

+ (void)initialize;

@end
