@class AWEButton, AWEUILoadingView, UIButton;

@interface AWEBaseDetailContainerViewHolder : AWEBaseListViewHolder

@property (retain, nonatomic) AWEButton *shareBtn;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIButton *backBtn;

- (void)setupViewHolder;
- (void)dismissLoadingView;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)showLoadingView;

@end
