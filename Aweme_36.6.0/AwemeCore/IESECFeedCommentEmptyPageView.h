@class UIImageView, UILabel, UIButton;
@protocol IESECFeedCommentEmptyPageViewProtocol;

@interface IESECFeedCommentEmptyPageView : UIView

@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *netErrorTitleLabel;
@property (retain, nonatomic) UILabel *errorHintLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (weak, nonatomic) id<IESECFeedCommentEmptyPageViewProtocol> delegate;

- (void)retryButtonClicked;
- (void)updateNetworkEmptyView;
- (void)updateNetworkEmptyViewWhileLoading;
- (void)updateNoResultEmptyView;
- (void)onIESECFeedCommentUIThemeChangeNotification;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
