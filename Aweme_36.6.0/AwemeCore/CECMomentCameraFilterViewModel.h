@class NSString, NSArray, NSMutableSet, NSObject;
@protocol OS_dispatch_group, CECMomentCameraService, CECMomentCameraFlowService;

@interface CECMomentCameraFilterViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber>

@property (nonatomic) BOOL guideLabelHidden;
@property (nonatomic) BOOL filterNameLabelHidden;
@property (retain, nonatomic) NSString *currentFilterName;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) BOOL filterViewHidden;
@property (nonatomic) BOOL containerViewHidden;
@property (copy, nonatomic) NSArray *filters;
@property (nonatomic) long long currentFilterIndex;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *filterDownloadGroup;
@property (copy, nonatomic) id /* block */ filterNameLabelHiddenBlock;
@property (retain, nonatomic) NSMutableSet *appendedEffects;
@property (nonatomic) long long previousDirection;
@property (weak, nonatomic) id<CECMomentCameraService> cameraService;
@property (weak, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)fetchEffects;
- (void)showFilterNameLabel;
- (void)didEndScrollingFilterWithDirection:(long long)a0;
- (void)didScrollFilterWithDirection:(long long)a0 progress:(double)a1;
- (void)reapplyFilter;
- (id)getCachedFilter;
- (void)applyFilter:(id)a0;
- (void)trackSelectFilter:(id)a0 enterMethod:(id)a1;
- (void)cacheFilter:(id)a0;
- (void)showGuideLabelIfNeeded;
- (id)currentFilter;
- (void).cxx_destruct;
- (void)dealloc;

@end
