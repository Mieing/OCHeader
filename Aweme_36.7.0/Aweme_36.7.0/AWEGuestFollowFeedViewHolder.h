@class UIView;

@interface AWEGuestFollowFeedViewHolder : AWEBaseListViewHolder

@property (retain, nonatomic) UIView *emptyVacantView;

- (void)setupViewHolder;
- (void)hideEmptyVacantView;
- (void)showEmptyVacantView;
- (void)showToast:(id)a0;
- (void)updateLayout;
- (void).cxx_destruct;

@end
