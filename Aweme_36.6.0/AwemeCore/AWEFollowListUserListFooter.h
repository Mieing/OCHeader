@class AWEUILoadingView, UIView;

@interface AWEFollowListUserListFooter : UICollectionReusableView

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *errorView;
@property (retain, nonatomic) UIView *emptyView;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) id /* block */ errorRetryButtonClickedBlock;

- (void)updateUIWithStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
