@class UIImageView, UILabel, DUXButton;
@protocol AWEProtectNickNameProgressingViewProtocol;

@interface AWEProtectNickNameProgressingView : UIView

@property (retain, nonatomic) UIImageView *timeImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) DUXButton *closeButton;
@property (weak, nonatomic) id<AWEProtectNickNameProgressingViewProtocol> delegate;

- (void)closeButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
