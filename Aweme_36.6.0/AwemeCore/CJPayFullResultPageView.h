@class CJPayResultPageModel, UILabel, NSDictionary, CJPayButton, CJPayAccountInsuranceTipView, NSMutableArray, UIView, UIScrollView, NSString, CJPayResultPageInfoModel, UIStackView, CJPayLynxInfoView, UIImageView;

@interface CJPayFullResultPageView : UIView <UIScrollViewDelegate, CJPayLynxViewDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollContentView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *payLogo;
@property (retain, nonatomic) UILabel *payStateLabel;
@property (retain, nonatomic) UIView *amountView;
@property (retain, nonatomic) UILabel *voucherLabel;
@property (retain, nonatomic) UIStackView *payInfoStackView;
@property (retain, nonatomic) CJPayButton *bottomButton;
@property (retain, nonatomic) CJPayButton *topRightButton;
@property (retain, nonatomic) CJPayAccountInsuranceTipView *safeGuardTipView;
@property (retain, nonatomic) UIView *naviView;
@property (nonatomic) BOOL isShowAllInfo;
@property (copy, nonatomic) NSString *orderType;
@property (retain, nonatomic) CJPayResultPageModel *model;
@property (retain, nonatomic) CJPayResultPageInfoModel *pageinfoModel;
@property (copy, nonatomic) NSDictionary *orderResponse;
@property (retain, nonatomic) NSMutableArray *lynxCard;
@property (retain, nonatomic) CJPayLynxInfoView *lynxInfoView;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ showGuideBlock;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)lynxView:(id)a0 receiveEvent:(id)a1 withData:(id)a2;
- (void)p_refresh;
- (void)loadLynxCard;
- (void)p_setupBottomButtonUI;
- (void)p_setAmountTitle;
- (void)p_updatePayInfo;
- (BOOL)p_buildLynxCardView;
- (id)p_buildInfoItemView;
- (id)p_getItemViewWithPayInfo:(id)a0;
- (id)p_createLynxCardItem:(id)a0;
- (void)p_buttonClickEvent;
- (void)p_completeButtonClick;
- (id)initWithCJOrderModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;

@end
