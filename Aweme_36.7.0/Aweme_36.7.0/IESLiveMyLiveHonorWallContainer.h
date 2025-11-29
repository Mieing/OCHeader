@class IESLiveMyLiveHonorOpenMoreView, IESLiveMyLiveHonorWallItemContainer;

@interface IESLiveMyLiveHonorWallContainer : IESLiveUserCardHonorWallContainer

@property (retain, nonatomic) IESLiveMyLiveHonorOpenMoreView *openIndicator;
@property (retain, nonatomic) IESLiveMyLiveHonorWallItemContainer *itemContainer;

- (double)getViewHeight;
- (double)getBeforeOpenHeight;
- (void)openMoreTapped:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
