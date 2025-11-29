@class NSString;

@interface AWEUserRecommendKitService : HTSService <AWEUserRecommendKitService>

@property (nonatomic) BOOL hasColdLanunchTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recommendManagerWithTableView:(id)a0 context:(id /* block */)a1;
- (id)recommendManagerWithTableView:(id)a0 viewModel:(id)a1;
- (id)recommendSectionViewModelWithContext:(id)a0;
- (Class)recommendSectionControllerClass;
- (Class)recommendCardSectionControllerClass;
- (id)recommendViewModelWithContextBuilder:(id /* block */)a0;
- (id)recommendViewModelWithContext:(id)a0;
- (id)defaultRecommendListContext;
- (void)configureRecommendListContextForUserWork:(id)a0;
- (id)defaultRecommendListContextWithUserWork;
- (id)generalCellLayout;
- (id)recUserListExitStrategy:(long long)a0;
- (void)coldLaunchTrackRecommendExitScene;
- (void)preloadFansNoticeRecommendIfNeeded;
- (void)preloadInteractNoticeRecommendIfNeeded;
- (id)recommendCardHorizontalViewWithContext:(id)a0;
- (void)dislikeMate:(id)a0 scene:(long long)a1;
- (id)recommendTableSectionProviderWithContext:(id /* block */)a0;
- (id)recUserListExitStrategyConfig;
- (long long)countToPermanentlyClose:(long long)a0;
- (long long)daysToReappearAfterClosed:(long long)a0;

@end
