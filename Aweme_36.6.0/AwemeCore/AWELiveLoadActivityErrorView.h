@class UIImageView, UILabel, UIView, UIButton;

@interface AWELiveLoadActivityErrorView : UIView

@property (retain, nonatomic) UIImageView *iconImage;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIView *topCoverView;
@property (copy, nonatomic) id /* block */ retryAction;
@property (copy, nonatomic) id /* block */ backAction;
@property (nonatomic) BOOL disableBackButton;
@property (nonatomic) BOOL needTopCoverView;
@property (nonatomic) double topCoverViewHeight;

- (id)initWithDisableBackButton:(BOOL)a0 needTopCoverView:(BOOL)a1 topCoverViewHeight:(id)a2;
- (double)p_backTopHeight;
- (void)retryButtonTapped:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)backButtonTapped:(id)a0;

@end
