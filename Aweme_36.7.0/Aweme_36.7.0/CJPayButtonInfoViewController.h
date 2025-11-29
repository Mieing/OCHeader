@class UILabel, CJPayErrorButtonInfo, CJPayStyleButton;

@interface CJPayButtonInfoViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) CJPayStyleButton *confirmButton;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;

- (void)p_onConfirmButtonAction;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
