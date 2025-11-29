@class ACCCameraSubscription, NSMutableArray, NSString;
@protocol ACCRecordSwitchModeService, ACCRecordAuthService;

@interface ACCRecordAutoPopupComponent : ACCFeatureComponent <ACCRecordAutoPopupService, ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) id<ACCRecordAuthService> authService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) NSMutableArray *popupList;
@property (nonatomic) BOOL hasCheckedShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)componentDidMount;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)autoShowRecordPopupIfNeed;
- (void)configRecordAutoPopupList;
- (void)checkNextPopupViewShow;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
