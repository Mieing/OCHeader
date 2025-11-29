@class UIImageView, UIButton, UILabel;

@interface AWEDanmakuSmartModeGuideViewController : UIViewController

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ vcCloseBlock;

- (void)closeButtonClick;
- (void)setUI;
- (void)configIconImageView;
- (void)onClickConfirm;
- (void).cxx_destruct;
- (id)init;

@end
