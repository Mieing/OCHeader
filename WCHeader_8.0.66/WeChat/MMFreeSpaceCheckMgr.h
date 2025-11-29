@class MMFreeSpaceCheckConfig, NSString, MMTimer, NSURL, NSObject, MMDiskUsageScaner;
@protocol OS_dispatch_queue;

@interface MMFreeSpaceCheckMgr : MMRootService <MMDiskUsageScannerDelegate, IDiskUsageMgr, MMServiceProtocol> {
    MMFreeSpaceCheckConfig *m_config;
    MMTimer *m_checkFreeSpaceTimer;
    unsigned long long _freeSizeLevelLow;
    unsigned long long _freeSizeLevelLower;
    unsigned long long _freeSizeLevelLowest;
    unsigned long long _freeSizeLevelAutoCleanCache;
    unsigned long long _freeSizeLevelDisable;
    NSString *_tipsDisableThreshold;
    unsigned long long _eLevel;
    unsigned long long _deviceStorage;
    unsigned long long _deviceFreeStorage;
    unsigned int _eDeviceStorageLevel;
    BOOL _bTipsing;
    unsigned int _lastScanAppSizeTimeStamp;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _statfsPath;
    NSURL *_volumnURL;
}

@property (retain, nonatomic) MMDiskUsageScaner *usageScanner;
@property (nonatomic) unsigned long long freeSizeLevelNeedShowAlert;
@property (nonatomic) unsigned long long defaultDisableSize;
@property (nonatomic) unsigned long long defaultAutoCleanCacheSize;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkQueue;
@property (nonatomic) BOOL isChecking;
@property (nonatomic) BOOL hasFreeSizeInited;
@property (nonatomic) BOOL bTestMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportNewAlert;
+ (BOOL)willGetFreeSizeByStatfs;
+ (BOOL)willAutoCleanCache;
+ (id)workDir;
+ (id)configPath;
+ (id)testFilePath;

- (id)init;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)checkFreeSpace;
- (BOOL)getFreeSize:(unsigned long long *)a0;
- (BOOL)getDiskSize:(unsigned long long *)a0;
- (BOOL)isUrgentFreeSpace;
- (unsigned long long)getUrgentFreeSize;
- (BOOL)needShowStorageDisableAlert;
- (BOOL)isDiskFullStatus;
- (BOOL)getFreeSizeInstantlyFromStatFs:(unsigned long long *)a0;
- (BOOL)getFreeSizeInstantly:(unsigned long long *)a0;
- (void)checkStorageDiable;
- (id)getCheckQueue;
- (void)checkOtherUserUsedSpace;
- (void)checkFreeSpaceEx;
- (void)setup;
- (void)calFreeSpace;
- (void)onFreeSpaceNotEnough:(unsigned long long)a0;
- (void)onFreeSpaceLow;
- (void)onFreeSpaceLower;
- (void)onFreeSpaceLowest;
- (BOOL)shouldTips;
- (void)startCheckDiskSize;
- (void)onDiskUsageMgrFinishOneScan:(id)a0;
- (void)handleScanStat:(id)a0;
- (void)createWorkDir;
- (void)loadConfig;
- (void)saveConfig;
- (void)goCleanView;
- (void)goCleanViewFromAnyPage;
- (void)StorageDisableAlertDismissed;
- (void)reportTipsType:(unsigned int)a0 andTipsOpt:(unsigned int)a1 important:(BOOL)a2;
- (void)reportStorageAlertOnWhiteListUI:(int)a0 scene:(id)a1;
- (void)reportStorageAlert:(int)a0 num:(unsigned long long)a1;
- (void)reportOldStorageAlert:(int)a0 alias:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
