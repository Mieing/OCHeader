@class UIImageView, UILabel, DUXButton;
@protocol AWEProtectNickNameInvalidViewProtocol;

@interface AWEProtectNickNameInvalidView : UIView

@property (retain, nonatomic) UIImageView *invalidImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) DUXButton *closeButton;
@property (weak, nonatomic) id<AWEProtectNickNameInvalidViewProtocol> delegate;

- (void)closeButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
