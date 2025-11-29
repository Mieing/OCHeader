@class IESGCPAudienceDetailView;
@protocol IESGCPGameDetailViewModelProtocol, IESGCPAudienceDetailScrollActions;

@interface IESGCPAudienceDetailViewScrollActionDispatcher : NSObject

@property (weak, nonatomic) IESGCPAudienceDetailView *audienceDetailView;
@property (nonatomic) long long slidingType;
@property (weak, nonatomic) id<IESGCPGameDetailViewModelProtocol> detailViewModel;
@property (weak, nonatomic) id<IESGCPAudienceDetailScrollActions> detailScrollActions;
@property (nonatomic) double currentFullScreenThemeProgress;

- (id)detailViewConfig;
- (double)stickyHeight;
- (void)handleAudienceDetailHeightDidChange:(double)a0;
- (void)handleParentScrollViewDidScroll:(id)a0;
- (id)initWithAudienceDetailView:(id)a0;
- (void)notifyHalfToFullScreenThemeAnimationProgressFrom:(double)a0;
- (void)notifyParentScrollOffsetAndStickyProgressDidChange:(double)a0;
- (void)notifyAudienceDetailVCSlidingStateResultIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
