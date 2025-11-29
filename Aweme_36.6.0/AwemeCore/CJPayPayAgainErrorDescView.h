@class CJPayPayAgainViewModel, CJPayPayAgainDisplayInfo, UIImageView, CJPayButton, UILabel, UIView, CJPayBaseVerifyManager;

@interface CJPayPayAgainErrorDescView : UIView

@property (retain, nonatomic) UIView *titleContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (retain, nonatomic) UIView *subTitleContentView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayButton *descIconButton;
@property (retain, nonatomic) CJPayPayAgainDisplayInfo *payAgainDisplayInfo;
@property (retain, nonatomic) CJPayBaseVerifyManager *verifyManager;
@property (copy, nonatomic) id /* block */ pushBlock;
@property (retain, nonatomic) CJPayPayAgainViewModel *viewModel;
@property (copy, nonatomic) id /* block */ clickTrackBlock;

- (void)refreshErrorDescView:(id)a0 payFailAssetInfoTitle:(id)a1;
- (void)p_jumpToDetailViewController;
- (void)p_showDescDetailAlertView;
- (void)p_discountStatementClicked;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
