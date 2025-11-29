@class NSString;

@interface AWENearbyLocationPermissionManager : NSObject <AWENearbyLocationPermissionManagerProtocol>

@property (nonatomic) BOOL isBecomeActiveFromLocationPermission;
@property (nonatomic) BOOL requesting;
@property (copy, nonatomic) id /* block */ authorizeBlk;
@property (readonly, nonatomic) BOOL shouldShowAlert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)__addObserver;
- (void)_onApplicationDidBecomeActiveNotification:(id)a0;
- (void)requestPermission:(id /* block */)a0;
- (void)requestPermissionWithoutInterval:(id /* block */)a0;
- (BOOL)hasAlertInWindow;
- (id /* block */)__shownBlock;
- (id)__alertDescription;
- (void)__showPermissionAlertWithTitle:(id)a0 desc:(id)a1 cover:(id)a2 actionText:(id)a3 cancelText:(id)a4 shown:(id /* block */)a5;
- (void)requestPermissionWithoutIntervalWithCustomTitle:(id)a0 customDesc:(id)a1 authorizeBlk:(id /* block */)a2;
- (void)requestPermissionInMap:(id /* block */)a0 customTitle:(id)a1 customDesc:(id)a2 cover:(id)a3 viewToShowAlert:(id)a4;
- (void)__showPermissionAlertWithTitle:(id)a0 desc:(id)a1 cover:(id)a2 actionText:(id)a3 cancelText:(id)a4 shown:(id /* block */)a5 UIConfigBlock:(id /* block */)a6;
- (void)__requestLocation:(BOOL)a0;
- (void)__showLocationServicesDisableAlertView:(id /* block */)a0;
- (void)requestPermissionInMapByUser:(id /* block */)a0 customTitle:(id)a1 customDesc:(id)a2 cover:(id)a3;
- (void)__openSettings;
- (void)__showPermissionAlertWithTitle:(id)a0 desc:(id)a1 cancel:(id /* block */)a2;
- (void)__trackEventLocationPermission:(BOOL)a0;
- (void)__becomeActiveFromLocationPermissionRequestLocation;
- (void)requestPermissionByUser:(id /* block */)a0;
- (void)requestPermissionInMap:(id /* block */)a0 viewToShowAlert:(id)a1;
- (void)requestPermissionInMapByUser:(id /* block */)a0;
- (void)__showLocationServicesEnableAlertView:(id /* block */)a0;
- (void)__showPermissionFloatView:(id)a0 desc:(id)a1 image:(id)a2 action:(id /* block */)a3 shown:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
