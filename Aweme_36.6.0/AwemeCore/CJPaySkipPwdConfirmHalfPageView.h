@class CJPaySecondaryConfirmInfoModel, CJPayButton, CJPayStandardButton, CJPayMarketingMsgView, UILabel, CJPayStyleCheckBox, UIView;

@interface CJPaySkipPwdConfirmHalfPageView : UIView

@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *tradeNameLabel;
@property (retain, nonatomic) CJPayStandardButton *confirmPayBtn;
@property (retain, nonatomic) CJPayStyleCheckBox *checkBox;
@property (retain, nonatomic) UILabel *checkDescLabel;
@property (retain, nonatomic) UIView *checkContentView;
@property (retain, nonatomic) CJPayMarketingMsgView *marketingMsgView;
@property (retain, nonatomic) CJPaySecondaryConfirmInfoModel *confirmInfo;
@property (readonly, nonatomic) CJPayButton *closeButton;

- (BOOL)shouldShowTradeName;
- (void)p_setupUIForBindCardHalfPage;
- (id)p_stringSeparatedWithDollar:(id)a0;
- (void)p_setupUIForSkipPwd;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
