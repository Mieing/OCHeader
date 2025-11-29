@class DUXLoadingParticleView;

@interface AWEAdCommentAutoRefreshFooter : MJRefreshAutoStateFooter

@property (retain, nonatomic) DUXLoadingParticleView *loadingView;

- (void)placeSubviews;
- (void)_startLoadingAnim;
- (void)_stopLoadingAnim;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
