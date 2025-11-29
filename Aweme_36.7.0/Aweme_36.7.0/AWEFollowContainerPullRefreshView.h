@class UILabel, DUXLoadingParticleView, NSString;

@interface AWEFollowContainerPullRefreshView : UIView <AWEFollowContainerPullRefreshViewProtocol>

@property (retain, nonatomic) UILabel *refreshLabel;
@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (nonatomic) BOOL isRefreshing;
@property (nonatomic) unsigned long long viewState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationWithController:(id)a0;

- (void)dragWithProgress:(double)a0;
- (void)beginRefreshingAfterDragEnd;
- (void)dragToEndWithProgress:(double)a0 refreshBlock:(id /* block */)a1;
- (void)dragCancelWithCompletion:(id /* block */)a0;
- (void)stopRefreshingCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)beginRefreshing;
- (void)setupUI;

@end
