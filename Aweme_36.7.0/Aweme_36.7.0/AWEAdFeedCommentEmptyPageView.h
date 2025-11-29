@class UIImageView, UILabel, UIButton;
@protocol AWEAdFeedCommentEmptyPageViewProtocol;

@interface AWEAdFeedCommentEmptyPageView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (weak, nonatomic) id<AWEAdFeedCommentEmptyPageViewProtocol> delegate;

- (void)retryButtonClicked;
- (void)updateNetworkEmptyView;
- (void)updateNetworkEmptyViewWhileLoading;
- (void)updateNoResultEmptyView;
- (void)onFeedCommentUIThemeChangeNotification;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
