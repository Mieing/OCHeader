@class UIColor, NSString, DotLoadingView, UIView, MMUILabel;

@interface WARefreshAutoAnimatingFooter : WARefreshAutoFooter

@property (retain, nonatomic) UIView *noMoreDataView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) MMUILabel *noMoreTipsLabel;
@property (copy, nonatomic) NSString *noMoreTips;
@property (weak, nonatomic) DotLoadingView *loadingView;
@property (retain, nonatomic) UIColor *noMoreTipsBackgroundColor;

- (id)createLoadingView;
- (void)onTapNoMore:(id)a0;
- (void)placeSubviews;
- (void)setState:(long long)a0;
- (void).cxx_destruct;

@end
