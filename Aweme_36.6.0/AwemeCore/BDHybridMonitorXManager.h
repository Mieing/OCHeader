@class BDHMXSettingsManager, BDHybridMonitorXUserInfo, BDHMXRemoteSetting, IESLiveDefaultSettingModel, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BDHybridMonitorXManager : NSObject

@property (retain, nonatomic) BDHybridMonitorXUserInfo *userInfo;
@property (retain, nonatomic) BDHMXSettingsManager *settingManager;
@property (retain) IESLiveDefaultSettingModel *iesLiveDefaultSetting;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain) BDHMXRemoteSetting *hybridSetting;
@property (nonatomic) BOOL isInitialized;
@property (nonatomic) BOOL disableSDKNetwork;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *settingsSemaphore;

+ (id)bdWebViewInternalClassName;
+ (id)shared;

- (void)startMonitorWithUserInfo:(id)a0;
- (void)setupMonitorSetting;
- (void)loadMonitorModuleWithSetting:(id)a0;
- (void)updateMonitorSetting:(id)a0;
- (void)dispatchAsyncHandlerInOperationQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
