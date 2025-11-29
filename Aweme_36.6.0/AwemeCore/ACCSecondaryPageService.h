@class UIView, NSArray, NSString, AWEVideoPublishViewModel, NSMutableArray, UIViewController;
@protocol ACCSecondaryPageRestoreService, ACCSequenceEditServiceProtocol, IESServiceProvider, ACCSecondaryPageInnerTransitionManager, ACCSecondaryPageInputData;

@interface ACCSecondaryPageService : NSObject <ACCSecondaryPageService>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCSecondaryPageRestoreService> restoreService;
@property (weak, nonatomic) id<ACCSecondaryPageInnerTransitionManager> transitionManager;
@property (weak, nonatomic) id<ACCSecondaryPageInputData> inputData;
@property (retain, nonatomic) NSArray *specifiedRepositorys;
@property (retain, nonatomic) AWEVideoPublishViewModel *backupWorkspace;
@property (retain, nonatomic) NSMutableArray *originalProjects;
@property (weak, nonatomic) UIViewController *secondaryPageViewController;
@property (retain, nonatomic) UIView *rootContainer;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UIView *previewContainer;
@property (retain, nonatomic) UIView *bottomContainer;
@property (retain, nonatomic) UIView *previewEditorContainer;
@property (weak, nonatomic) UIView *playerOriginSuperView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playerOriginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bigMediaSnapOriginFrame;
@property (nonatomic) double playerOriginScale;
@property (nonatomic) long long originEditMode;
@property (nonatomic) long long dissmissType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)restoreConfig;
- (void)dismissSecondaryPageAnimationCompletion:(id /* block */)a0;
- (void)dismissUseZoomOutWithAnimationConfig:(id)a0 completion:(id /* block */)a1;
- (void)backupWorkspaceWithSpecifiedRepositorys:(id)a0;
- (void)rollbackWorkspaceForceRefreshProjects:(BOOL)a0;
- (void)forceQuit;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (id)needBackupBasicRepositoryClasses;
- (id)backupImageCacheKey:(id)a0;
- (BOOL)needRollbackProjects;
- (void).cxx_destruct;
- (void)activePlayer;
- (void)setupPlayer;

@end
