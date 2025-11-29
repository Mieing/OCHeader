@class NSString, BackupStartGeneralInfo;

@interface BackupStartRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (nonatomic) unsigned long long bigDataSize;
@property (nonatomic) unsigned long long sessionCount;
@property (nonatomic) unsigned long long msgCount;
@property (retain, nonatomic) BackupStartGeneralInfo *generalInfo;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic) int transferType;
@property (retain, nonatomic) NSString *sessionId;

+ (void)initialize;

@end
