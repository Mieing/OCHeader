@class NSArray, NSString, AWEVideoPublishViewModel;
@protocol ACCCameraService, ACCCameraPureModeService, ACCDuetLayoutManagerDelegate;

@interface ACCDuetLayoutManager : NSObject <ACCCameraPureModeRecover>

@property (retain, nonatomic) NSArray *oldNodes;
@property (nonatomic) BOOL hasAppliedDownloadedLayout;
@property (weak, nonatomic) id<ACCDuetLayoutManagerDelegate> delegate;
@property (retain, nonatomic) NSArray *duetLayoutModels;
@property (nonatomic) BOOL needSwitchLayoutFirstTime;
@property (nonatomic) BOOL hasErrorWhenFetchingEffects;
@property (nonatomic) long long firstTimeIndex;
@property (copy, nonatomic) NSString *firstDuetLayout;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<ACCCameraPureModeService> pureModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildDefaultLeftRightNode;

- (id)layoutModelAtIndex:(long long)a0;
- (void)rollbackEffect;
- (void)toggleDuetLayoutWithIndex:(long long)a0;
- (void)buildLayoutModelsWithEffects:(id)a0;
- (void)downloadFirstEffectResource;
- (long long)indexFromDuetLayout:(id)a0;
- (void)hanldeFirstLayoutResourceDownloaded;
- (void)applyDuetLayoutWithIndex:(long long)a0;
- (void)notifyDuetLayoutWithIndex:(long long)a0;
- (void)cameraApplyComposerNodes:(id)a0;
- (void)applyDefaultDuetLayouts;
- (void)downloadDuetLayoutResources;
- (id)p_dueLayoutModelsWithEffects:(id)a0;
- (id)duetLayoutFromIndex:(long long)a0;
- (BOOL)applyOldNodesDuetLayoutsForMainMode;
- (void)cleanCurrentDuetLayouts;
- (BOOL)applyFirstDuetLayoutsIfEnable;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
