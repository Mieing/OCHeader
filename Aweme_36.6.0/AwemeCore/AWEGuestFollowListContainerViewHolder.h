@class AWEUILoadingView;

@interface AWEGuestFollowListContainerViewHolder : AWEBaseListViewHolder

@property (retain, nonatomic) AWEUILoadingView *loadingView;

- (void)dismissLoadingView;
- (id)emptyPageConfigForState:(unsigned long long)a0;
- (void)showToast:(id)a0;
- (void).cxx_destruct;
- (void)showLoadingView;

@end
