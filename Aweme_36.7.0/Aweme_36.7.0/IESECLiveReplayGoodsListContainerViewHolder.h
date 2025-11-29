@class IESECLiveReplayGoodsListContext, IESECLiveReplayGoodsListViewHolder, NSString, IESECLiveStateView, UIView, UIPanGestureRecognizer, IESECLiveReplayGoodsListHeaderViewHolder;
@protocol IESECLiveReplayGoodsListContainerViewHolderDelegate;

@interface IESECLiveReplayGoodsListContainerViewHolder : UIView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) IESECLiveReplayGoodsListContext *context;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESECLiveStateView *stateView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (weak, nonatomic) id<IESECLiveReplayGoodsListContainerViewHolderDelegate> delegate;
@property (weak, nonatomic) IESECLiveReplayGoodsListHeaderViewHolder *headerView;
@property (weak, nonatomic) IESECLiveReplayGoodsListViewHolder *goodsListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showEmptyView;
- (void)showNetErrorView;
- (void)showWithAnimated:(BOOL)a0;
- (void)setupStateViewUI;
- (void)addGoodsListView:(id)a0;
- (void)addGoodsListHeaderView:(id)a0;
- (void)hideStateView;
- (void)didUserTapBackground:(id)a0;
- (void)configStateView;
- (void)addPanGesture;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)initWithContext:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)scrollToTopAnimated:(BOOL)a0;
- (void)setupUI;
- (void)handlePanGesture:(id)a0;
- (void)showLoadingView;

@end
