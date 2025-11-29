@class UIView, WCPayBalanceChargeLQTEntryView, WCPayNoticeItemView, NSString, UIImageView, UIButton, NSDictionary, UITextField, WCPayDecimalKeyboardView, MMUILabel, WCPayWebImageView, WCPayBindCardInfo;
@protocol WCPaySaveViewControllerDelegate;

@interface WCPaySaveViewController : WCPayBaseViewController <WCPayBalanceSelectCardViewDelegate, WCPayDecimalKeyboardViewDelegate, WCPayBalanceChargeLQTEntryViewDelegate> {
    id<WCPaySaveViewControllerDelegate> m_delegate;
}

@property (retain, nonatomic) UIView *headerContentView;
@property (retain, nonatomic) UIView *cardContentView;
@property (retain, nonatomic) MMUILabel *cardTitle;
@property (retain, nonatomic) WCPayWebImageView *banklogoImgView;
@property (retain, nonatomic) UIButton *bankNameSelectBtn;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (retain, nonatomic) MMUILabel *bankdetailLabel;
@property (retain, nonatomic) UIButton *cardCoverButton;
@property (retain, nonatomic) UIView *moneyContentView;
@property (retain, nonatomic) MMUILabel *moneyTitleLabel;
@property (retain, nonatomic) MMUILabel *moneyCurrency;
@property (retain, nonatomic) UITextField *moneyTextField;
@property (retain, nonatomic) UIView *moneySepLine;
@property (retain, nonatomic) WCPayBindCardInfo *currentCardInfo;
@property (nonatomic) BOOL bIsUserManulSelectCard;
@property (retain, nonatomic) WCPayDecimalKeyboardView *keyboardView;
@property (nonatomic) BOOL bIsKeyboardShowing;
@property (nonatomic) BOOL bIsShowingCardInfoView;
@property (retain, nonatomic) WCPayBalanceChargeLQTEntryView *lqtEntryView;
@property (retain, nonatomic) WCPayNoticeItemView *noticeItemView;
@property (retain, nonatomic) NSDictionary *m_dicBanners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)viewDidPop:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)a0;
- (void)initNavigationBar;
- (void)reloadTableView;
- (void)FillSaveMoneyCancel;
- (void)clickBankName;
- (void)textFieldDidChange;
- (void)activeTextFieldWithCheckTop:(BOOL)a0;
- (void)setNeedRefreshDefaultCard;
- (id)cardInfos;
- (id)defaultCard;
- (void)setCardInfo:(id)a0;
- (id)getCardNameFrom:(id)a0;
- (double)selectCardViewSafeBottom;
- (void)selectCardView:(id)a0 didSelectCard:(id)a1;
- (void)selectCardViewDidSelectAddNewCard:(id)a0;
- (void)keyboardViewConfirmBtnClick:(id)a0;
- (id)keyboardHostViewController;
- (void)decimalKeyboardWillShow:(double)a0;
- (void)decimalKeyboardWillHide;
- (void)setupInputView;
- (void)checkConfirmBtnStatus;
- (BOOL)shouldShowLqtEntryView;
- (void)onClickLQTChargeEntryView;
- (void).cxx_destruct;

@end
