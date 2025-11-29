@class NSString, NSHashTable;

@interface IESLiveWifiToCellularManager : NSObject <IESLiveWifiToCellularManagerInterface>

@property (nonatomic) long long networkState;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)sharedManager;

- (void)p_addObserver;
- (void)triggerSwitching;
- (BOOL)isWifiWithCellularTransData;
- (BOOL)isWifiWithCellularUp;
- (void)executeMultiPathPullStreamCommandWithCanInteractive:(BOOL)a0 isWeakNetwork:(BOOL)a1;
- (void)p_receiveMultiNetworkNotification:(id)a0;
- (void)p_notifyChangeToCellularTransData;
- (void)p_notifyChangeToDefaultTransData;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (id)currentNetworkState;

@end
