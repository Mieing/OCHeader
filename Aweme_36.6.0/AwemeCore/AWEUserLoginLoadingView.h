@class DUXLoadingToast;

@interface AWEUserLoginLoadingView : UIView

@property (retain, nonatomic) DUXLoadingToast *loadingToast;

- (void)endLoading;
- (void)startLoadingInScene:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
