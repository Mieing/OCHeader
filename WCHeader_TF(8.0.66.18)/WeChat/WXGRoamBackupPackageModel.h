@class NSMutableArray, RoamBackupPackage;

@interface WXGRoamBackupPackageModel : NSObject

@property (retain, nonatomic) RoamBackupPackage *package;
@property (nonatomic) BOOL isAutoBackup;
@property (nonatomic) BOOL isStartedByAutoBackup;
@property (nonatomic) BOOL isBackupWhenLowPower;
@property (nonatomic) BOOL isBackupWithMobileNet;
@property (nonatomic) unsigned int lastErrorTime;
@property (nonatomic) unsigned long long notifyCode;
@property (nonatomic) BOOL isCreate;
@property (nonatomic) BOOL isBackup;
@property (nonatomic) unsigned long long totalSize;
@property (retain, nonatomic) NSMutableArray *convTimeRangeList;
@property (nonatomic) unsigned long long restoreSize;
@property (nonatomic) unsigned long long currentCount;
@property (nonatomic) unsigned long long totalCount;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) unsigned long long sortNum;
@property (nonatomic) unsigned long long continueOnErrorCount;
@property (nonatomic) BOOL hasNotifyPC;

- (id)init;
- (void).cxx_destruct;

@end
