@class UIView;
@protocol ACCLoadingViewProtocol;

@interface ACCRefreshHeader : MJRefreshHeader

@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loading;
@property (weak, nonatomic) UIView *parentView;
@property (nonatomic) struct CGPoint { double x; double y; } position;

+ (id)headerWithRefreshingBlock:(id /* block */)a0 backgroundColor:(id)a1;
+ (id)headerWithRefreshingBlock:(id /* block */)a0 backgroundColor:(id)a1 parentView:(id)a2 position:(struct CGPoint { double x0; double x1; })a3;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)scrollViewContentSizeDidChange:(id)a0;
- (void)scrollViewPanStateDidChange:(id)a0;
- (void)setLoadingViewBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
