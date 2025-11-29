@class UIView;
@protocol IESGCPRefreshView;

@interface IESGCPRefreshFooter : MJRefreshAutoStateFooter

@property (retain, nonatomic) UIView<IESGCPRefreshView> *loadingView;
@property (retain, nonatomic) UIView *errorView;
@property (nonatomic) BOOL hasError;
@property (nonatomic) long long footerState;

- (void)placeSubviews;
- (void)refreshFooterView;
- (void).cxx_destruct;
- (void)prepare;
- (void)setState:(long long)a0;

@end
