@class AWESearchCachalotFeedControllerContext, AWESearchCachalotGeneralCardContainerView;
@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchCachalotGeneralComponent : AWESearchCachalotComponent

@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> viewModel;
@property (retain, nonatomic) AWESearchCachalotGeneralCardContainerView *containerView;
@property (retain, nonatomic) AWESearchCachalotFeedControllerContext *cellContext;
@property (nonatomic) long long currentIndex;

- (void)componentWillDisplay;
- (void)componentDidEndDisplay;
- (void)componentShowingRatioWillExceed:(double)a0;
- (void)componentShowingRatioWillUnder:(double)a0;
- (void)componentPrepareForReuse;
- (id)cellController;
- (id)initWithView:(id)a0 viewModel:(id)a1;
- (void)clearUnreusedSingleRecommendWordsCard;
- (void)handleDoubleColumnReignActive;
- (void).cxx_destruct;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;

@end
