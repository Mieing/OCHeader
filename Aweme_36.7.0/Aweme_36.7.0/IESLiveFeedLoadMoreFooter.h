@class UITapGestureRecognizer, NSDictionary, UIView;
@protocol IESLiveRefreshView;

@interface IESLiveFeedLoadMoreFooter : MJRefreshAutoFooter

@property (weak, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) BOOL isShowingOnScreen;
@property (copy, nonatomic) id /* block */ paramsRefreshingBlock;
@property (copy, nonatomic) NSDictionary *refreshingParams;
@property (retain, nonatomic) UIView<IESLiveRefreshView> *loading;
@property (copy, nonatomic) id /* block */ noMoreDataClickBlock;
@property (copy, nonatomic) id /* block */ showStateChangeBlock;

+ (id)footerWithRefreshingParamsBlock:(id /* block */)a0;

- (void)placeSubviews;
- (void)scrollViewContentOffsetDidChange:(id)a0;
- (void)handleTapInView:(id)a0;
- (void)beginRefreshingWithParams:(id)a0;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
