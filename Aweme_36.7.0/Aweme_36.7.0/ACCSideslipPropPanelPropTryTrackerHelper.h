@class NSString, NSDictionary, AWEVideoPublishViewModel;
@protocol ACCEditEffectPanelServiceProtocol, ACCSideslipPropPanelService, IESServiceProvider, ACCSideslipPropInternalService, ACCGenericEffectPanelTrackerService, ACCSideslipPropPanelTrackerService;

@interface ACCSideslipPropPanelPropTryTrackerHelper : NSObject

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropInternalService> sideslipPropInternalService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (weak, nonatomic) id<ACCEditEffectPanelServiceProtocol> genericEffectPanelService;
@property (weak, nonatomic) id<ACCGenericEffectPanelTrackerService> genericEffectPanelTrackerService;
@property (copy, nonatomic) NSString *propApplyMethod;
@property (copy, nonatomic) NSString *preTrackTryApplyedEffectId;
@property (copy, nonatomic) NSDictionary *preTrackTryParams;
@property (nonatomic) double preTrackTryApplyedEffectStartTime;
@property (nonatomic) unsigned long long preTrackApplyedEffectType;

+ (void)updateEditPropInfoWithRepository:(id)a0 effect:(id)a1 tabName:(id)a2 propPosition:(long long)a3;

- (void)trackPropTryFinishEventIfNeeded;
- (id)applyedEffectId;
- (void)trackPropTryForGenericTempalteModel;
- (id)initWithServiceContainer:(id)a0 repository:(id)a1;
- (id)applyTrackerService;
- (id)editPropExtraInfoWithGenericTemplateModel:(id)a0;
- (void)trackPropTryForEffectModel:(id)a0;
- (void)markPropApplyMethodWith:(BOOL)a0;
- (void)resetPropTryStartTimeIfNeededWithAppliedEffectModel:(id)a0;
- (id)getPropTryParamsForEffectModel:(id)a0;
- (id)getTryParamsWithGenericTemplate:(id)a0;
- (id)p_complementaryBeautyIDForTemplateModel:(id)a0 repoModel:(id)a1;
- (void).cxx_destruct;

@end
