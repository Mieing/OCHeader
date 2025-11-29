@class UIImageView, AWEUILoadingView, UIView, UILabel;

@interface AWETeenFeedDoubleColumnViewHolder : AWEBaseListViewHolder

@property (retain, nonatomic) AWEUILoadingView *refreshLoadingView;
@property (retain, nonatomic) UIView *switchModeCapsuleContainerView;
@property (retain, nonatomic) UIImageView *switchModeCapsuleIconImageView;
@property (retain, nonatomic) UILabel *switchModeCapsuleLabel;
@property (retain, nonatomic) UIView *switchModeRoundContainerView;
@property (retain, nonatomic) UIImageView *switchModeRoundIconImageView;

- (void)setupViewHolder;
- (void)startRefreshLoading;
- (void)stopRefreshLoading;
- (void)updateLayout;
- (void).cxx_destruct;

@end
