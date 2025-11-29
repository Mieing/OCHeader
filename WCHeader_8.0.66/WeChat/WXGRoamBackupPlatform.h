@class NSString, AffRoamPlatformCallback, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface WXGRoamBackupPlatform : NSObject <AffRoamPlatformBase, IRoamBackupPackageServiceExt>

@property (retain, nonatomic) AffRoamPlatformCallback *roamPlatformCb;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *chatLogSemaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bridgeQueue;
@property (copy, nonatomic) NSString *curBindId;
@property (nonatomic) unsigned long long bindTaskId;
@property (copy, nonatomic) NSString *pcWifiName;
@property (nonatomic) BOOL inPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)setCallback:(id)a0;
- (void)getAllConversationsAsync:(unsigned long long)a0;
- (id)getLabelNameOfId:(int)a0;
- (id)getUserDisplayName:(id)a0;
- (id)getUsersFromLabel:(int)a0;
- (void)getAllDevicesAsync:(unsigned long long)a0;
- (void)getOnlineDevicesAsync:(unsigned long long)a0;
- (id)getSdkInitializeData;
- (void)bindDeviceAsync:(unsigned long long)a0 device:(id)a1;
- (BOOL)checkPermissionSAF:(id)a0;
- (BOOL)isUdiskOnline:(id)a0;
- (int)getBatteryCapacity;
- (id)getCacheDiskPathById:(id)a0;
- (BOOL)isAnyUdiskOnline;
- (void)removeCacheDiskPathById:(id)a0;
- (void)notifyStatusChanged:(unsigned long long)a0 taskType:(int)a1 taskState:(int)a2 summary:(id)a3;
- (void)updateBackupPackageModelStatus:(unsigned long long)a0 taskType:(int)a1 status:(int)a2;
- (void)notifyProgressChanged:(unsigned long long)a0 transferStatus:(id)a1 progress:(int)a2;
- (void)updateBackupPackageModel:(unsigned long long)a0 progress:(int)a1;
- (void)removeStateByPkgId:(unsigned long long)a0;
- (void)openLocation:(id)a0;
- (void)startForegroundService;
- (void)stopForegroundService;
- (void)getNetNameAsync:(unsigned long long)a0;
- (void)globalForceNotify:(id)a0 state:(int)a1 taskType:(int)a2 title:(id)a3;
- (void)globalForceNotifyDelete:(unsigned long long)a0 deleteType:(int)a1 title:(id)a2 errorCode:(int)a3;
- (void)resetMediaTime:(unsigned long long)a0;
- (void)listenPCNetwork:(int)a0 deviceId:(id)a1;
- (id)getPCWifiName:(id)a0;
- (void)generalNotifyPc:(id)a0 args:(id)a1;
- (BOOL)canBackup;
- (void)keepScreenOn:(BOOL)a0;
- (void)endRecover;
- (void)releaseThreadPool:(BOOL)a0;
- (void)sendStrongNotify:(id)a0 title:(id)a1 packageId:(unsigned long long)a2;
- (unsigned long long)convertToNativeNotifyCode:(int)a0;
- (void)syncTaskStatusFromFlutter:(id)a0;
- (void)removeTaskStatusFromFlutter:(unsigned long long)a0;
- (unsigned long long)getPreciseNotifyCodeWithTaskType:(int)a0 taskState:(int)a1;
- (void)onPCNetworkChangedWithWifi:(id)a0 usbEnabled:(BOOL)a1;
- (void).cxx_destruct;

@end
