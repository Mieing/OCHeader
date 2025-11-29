@class NSDictionary;
@protocol VeLivePlayerGlobalObserver;

@interface VeLivePlayerGlobalManager : NSObject

@property (nonatomic) BOOL enableUpdateNetworkToLiveIo;
@property (copy, nonatomic) NSDictionary *dolphinSettings;
@property (copy, nonatomic) NSDictionary *appInfo;
@property (nonatomic) BOOL enableUseLiveIO;
@property (nonatomic) BOOL liveIOStartSuccess;
@property (weak, nonatomic) id<VeLivePlayerGlobalObserver> observer;

+ (id)defaultManager;

- (void /* unknown type, empty encoding */)liveIOSetValuePtr:(void /* unknown type, empty encoding */)a0 strKey:(void /* unknown type, empty encoding */)a1;
- (void /* unknown type, empty encoding */)liveIOSetConfig:(void /* unknown type, empty encoding */)a0 withConfig:(void /* unknown type, empty encoding */)a1;
- (id)hook_liveIOGetValue:(unsigned long long)a0 strKey:(id)a1;
- (long long)liveIOStart:(id)a0;
- (void)liveIOPrepare:(id)a0 withVpaas:(id)a1;
- (void)liveIONotifyFinish:(id)a0 withInfo:(id)a1;
- (void)liveIOLoadDemuxer:(id)a0 withVpaas:(id)a1;
- (void)liveIOUnloadDemuxer:(id)a0 withInfo:(id)a1;
- (void)liveIOSetValue:(id)a0 strKey:(id)a1;
- (id)liveIOGetValue:(unsigned long long)a0 strKey:(id)a1;
- (void)liveIOClose;
- (void)installModule_LiveIO;
- (void)liveIOSetConfig:(int)a0 withConf:(id)a1;
- (void)startNetworkMonitor;
- (void)stopNetworkMonitor;
- (void)updateLiveIoNetworkStatus:(long long)a0;
- (long long)getCurrentNetworkType;
- (void)hook_liveIOSetValue:(id)a0 strKey:(id)a1;
- (void)installModule_Network;
- (void)installGolbalManagerModule;
- (id)parseLiveIoConfig;
- (long long)hook_liveIOStart:(id)a0;
- (void)hook_startNetworkMonitor;
- (void)hook_liveIOClose;
- (void)hook_stopNetworkMonitor;
- (void)updateDolphinConfig;
- (void)updateUserConfig;
- (void)updateConfig:(long long)a0 config:(id)a1;
- (void)updateCurrentNetworkStatus:(long long)a0;
- (id)getValueByKey:(long long)a0;
- (void)setAlogCallback:(id /* block */)a0;
- (void)hook_liveIOSetConfig:(int)a0 withConfig:(id)a1;
- (void)hook_liveIOPrepare:(id)a0 withVpaas:(id)a1;
- (void)hook_liveIONotifyFinish:(id)a0 withInfo:(id)a1;
- (void)hook_liveIOLoadDemuxer:(id)a0 withVpaas:(id)a1;
- (void)hook_liveIOUnloadDemuxer:(id)a0 withInfo:(id)a1;
- (void)hook_liveIOSetValuePtr:(id)a0 strKey:(void *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)start;

@end
