@class NSString, AWEBinding, UILabel, AWEUILoadingView;
@protocol AWEUserRecommendTableViewModelProtocol;

@interface AWEUserRecommendFooterView : UIView <AWEUserRecommendHeaderFooterViewProtocol>

@property (retain, nonatomic) UILabel *promptLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEBinding *dataStateBinding;
@property (nonatomic) BOOL displaying;
@property (nonatomic) BOOL hasTriggeredLoadMore;
@property (retain, nonatomic) id<AWEUserRecommendTableViewModelProtocol> viewModel;
@property (nonatomic) long long scrollDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;
+ (id)headerFooterView;

- (void)didScrollWithVelocity:(double)a0;
- (void)willBeginDragging;
- (void)p_loadMore;
- (void)p_setupUI;
- (void)config;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
