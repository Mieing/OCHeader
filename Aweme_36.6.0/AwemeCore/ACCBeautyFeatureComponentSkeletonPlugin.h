@class NSString, ACCSkeletonDetectTipsManager, ACCBeautyFeatureComponent;
@protocol ACCRecordSwitchModeService, ACCFeatureComponent;

@interface ACCBeautyFeatureComponentSkeletonPlugin : ACCFeatureComponent <ACCAlgorithmEvent, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCBeautyFeatureComponent *hostComponent;
@property (nonatomic) BOOL hadDetectSkeleton;
@property (retain, nonatomic) ACCSkeletonDetectTipsManager *skeletonTipsManager;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)onExternalAlgorithmCallback:(id)a0 type:(unsigned long long)a1;
- (void)loadComponentView;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)p_updateDetectTips;
- (BOOL)categoryHasAllZeroIdentify:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
