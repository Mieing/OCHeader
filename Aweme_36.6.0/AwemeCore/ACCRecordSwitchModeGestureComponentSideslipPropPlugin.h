@class NSString;
@protocol ACCFeatureComponent, ACCSideslipPropService, ACCRecordPropService, ACCRecordSwitchModeGestureService;

@interface ACCRecordSwitchModeGestureComponentSideslipPropPlugin : NSObject <ACCSideslipPropServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCRecordSwitchModeGestureService> modeGestureService;
@property (nonatomic) BOOL disableSwitchModePanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)sideslipPropService:(id)a0 willChangeShowState:(unsigned long long)a1;
- (void)sideslipPropService:(id)a0 didChangeShowState:(unsigned long long)a1;
- (void)bindServices:(id)a0;
- (void)bindToComponent:(id)a0;
- (void)configDefaultValueForDisableFlag;
- (void).cxx_destruct;

@end
