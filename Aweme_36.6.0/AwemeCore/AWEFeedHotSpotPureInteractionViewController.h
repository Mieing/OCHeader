@interface AWEFeedHotSpotPureInteractionViewController : AWEFeedHotSpotInteractionViewController

- (id)dispatcherManager;
- (void)setupContainer;
- (void)makeViewConstraints;
- (void)removeAndRebuildLeftContainer;
- (void)removeAndRebuildBottomContainer;
- (void)removeAndRebuildAllContainers;
- (void)removeAndRebuildConstraintsAllContainers;
- (void)updateLeftContainerWidth;
- (void)updateLeftContainerWidthIfNeed;
- (id)dispatchCoordinator;
- (void)setupDispatcherManager;
- (void)registerMessage;
- (void)setupEvent;
- (id)elementConfigs;
- (void)setupBottomContainer;
- (void)setupLeftContainer;
- (void)setupRightContainer;
- (void)setupViewBreakPoint;
- (void)bindConfigWithHelper;
- (void)setupClearPlaceHolderView;
- (id)bottomTempAnimationManager;
- (id)bottomFilterHandler;
- (id)clearPlaceHolderView;
- (id)authorExtraPlaceHolderView;
- (id)descriptionExtraPlaceHolderView;
- (id)chapterProgressBarPlaceHolderView;
- (void)viewDidLoad;
- (id)viewModel;

@end
