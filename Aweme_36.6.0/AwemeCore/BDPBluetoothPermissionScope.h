@class NSString, CBCentralManager, BDPPermissionScopeContextInfo;

@interface BDPBluetoothPermissionScope : BDPBasePermissionScope <CBCentralManagerDelegate>

@property (retain, nonatomic) CBCentralManager *centralManager;
@property (nonatomic) long long bluetoothState;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) BDPPermissionScopeContextInfo *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedScope;

- (id)title:(id)a0;
- (unsigned long long)privacyScopeEnumName:(id)a0;
- (BOOL)isNeedRecorded;
- (BOOL)isCanCombine:(id)a0;
- (id)brief:(id)a0;
- (id)briefDesc:(id)a0;
- (id)desc:(id)a0;
- (void)forceRequestPermission:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)centralManagerDidUpdateState:(id)a0;
- (id)eventName;

@end
