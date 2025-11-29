@class NSDate;

@interface WXGRoamBackupTaskStatus : NSObject

@property (nonatomic) unsigned long long packageId;
@property (nonatomic) int taskType;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long notifyCode;
@property (nonatomic) int progress;
@property (nonatomic) unsigned long long currentCount;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) BOOL isAutoBackup;
@property (nonatomic) BOOL isBackup;
@property (retain, nonatomic) NSDate *lastUpdateTime;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
