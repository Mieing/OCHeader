@class NSTimer, NSString;

@interface IESLiveRequestMonitor : NSObject <IESLiveWifiToCellularServiceAction, IESLiveRequestMonitorModuleInterface>

@property (retain, nonatomic) NSTimer *enterRoomTimer;
@property (retain, nonatomic) NSTimer *loadMoreTimer;
@property (nonatomic) BOOL isWifiToCellular;
@property (nonatomic) BOOL isTriggerNetSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didChangeToCellularTransData:(id)a0;
- (void)didChangeToDefaultTransData:(id)a0;
- (void)beginMonitorWithMonitorType:(long long)a0;
- (void)endMonitorWithMonitorType:(long long)a0;
- (BOOL)isTriggerWifiSwitchToCellular;
- (void)triggerSwitchingWithMonitorType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
