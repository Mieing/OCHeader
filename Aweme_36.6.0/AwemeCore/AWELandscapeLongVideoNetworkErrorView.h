@class UIImageView, UILabel, DUXButton;

@interface AWELandscapeLongVideoNetworkErrorView : UIView

@property (retain, nonatomic) UIImageView *networkErrorImageView;
@property (retain, nonatomic) UILabel *networkErrorTitleLabel;
@property (retain, nonatomic) UILabel *networkErrorSubTitleLabel;
@property (retain, nonatomic) DUXButton *retryButton;
@property (copy, nonatomic) id /* block */ didTapRetryButtonBlock;

- (void)didTapRetryButton:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
