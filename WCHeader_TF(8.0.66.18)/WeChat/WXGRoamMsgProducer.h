@class NSString, WXGBackupMMDB, NSRecursiveLock;

@interface WXGRoamMsgProducer : NSObject

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) unsigned int fromTimeSec;
@property (nonatomic) unsigned int toTimeSec;
@property (nonatomic) unsigned long long trueOffset;
@property (nonatomic) unsigned long long lastRowID;
@property (nonatomic) unsigned long long filterMsgCnt;
@property (retain, nonatomic) WXGBackupMMDB *backupMMDB;
@property (retain, nonatomic) NSRecursiveLock *handlerLock;

- (id)init;
- (id)getMsgOffset:(unsigned long long)a0;
- (void).cxx_destruct;

@end
