@class RichTextView, UIButton, WCFinderGetWechatHDHeadFetcher, NSString, UILabel, MMUIButton, WCFinderHalfScreenCreateUserVCAcctView;
@protocol WCFinderHalfScreenCreateUserViewControllerDelegate;

@interface WCFinderHalfScreenCreateUserViewController : MMUIHalfScreenViewController <ILinkEventExt>

@property (retain, nonatomic) UILabel *tipsView;
@property (retain, nonatomic) WCFinderHalfScreenCreateUserVCAcctView *acctView;
@property (retain, nonatomic) MMUIButton *aggreCheckBox;
@property (retain, nonatomic) RichTextView *aggrementView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) WCFinderGetWechatHDHeadFetcher *wechatHDHeadFetcher;
@property (weak, nonatomic) id<WCFinderHalfScreenCreateUserViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *reccommendCreateAcctNickName;
@property (retain, nonatomic) NSString *confirmBtnTitle;
@property (retain, nonatomic) NSString *customCreateTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHeightWithWidth:(double)a0;

- (void)viewDidLoad;
- (void)setupData;
- (void)setupHalfScreenView;
- (void)setupSubViews;
- (id)getReportDict;
- (void)setViewDataReport:(id)a0 drid:(id)a1;
- (void)setupLayout;
- (BOOL)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (id)getNickName;
- (void)shakeAggreetView;
- (void)onClickAgreementCheckBox:(id)a0;
- (void)onClickEditBtn;
- (void)onClickConfirmBtn:(id)a0;
- (void)onClickCancelBtn:(id)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
