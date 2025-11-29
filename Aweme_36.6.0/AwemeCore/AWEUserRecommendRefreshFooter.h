@class NSMutableDictionary, NSString, UILabel, DUXLoadingParticleView, AWEUserRecommendTableViewManager;

@interface AWEUserRecommendRefreshFooter : AWERefreshFooter <AWEUserRecommendRefreshFooterProtocol>

@property (retain, nonatomic) DUXLoadingParticleView *loadingView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) NSMutableDictionary *stateTitles;
@property (weak, nonatomic) AWEUserRecommendTableViewManager *tableViewManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)placeSubviews;
- (void)executeRefreshingCallback;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })scrollViewOriginalInset;
- (long long)mj_insetBResetedOffset;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(long long)a1;
- (void)setHidden:(BOOL)a0;
- (void)prepare;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setState:(long long)a0;
- (void)dealloc;

@end
