@class UIView, NSString, UIImageView, CJPayDyPaySignOnlyBackwardVoucherView, CJPayCommonProtocolView, CJPayDyPaySignOnlyBackwardModel, CJPayStandardButton, CJPayMsTimer, UIScrollView;

@interface CJPayDyPaySignOnlyBackwardViewController : CJPayHalfPageBaseViewController <CJPayTimerProtocol>

@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) CJPayDyPaySignOnlyBackwardVoucherView *voucherContentView;
@property (retain, nonatomic) CJPayMsTimer *msTimer;
@property (nonatomic) BOOL isClickConfirm;
@property (nonatomic) BOOL isAllVoucherTimeHidden;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) CJPayStandardButton *backBtn;
@property (retain, nonatomic) CJPayStandardButton *confirmBtn;
@property (retain, nonatomic) CJPayCommonProtocolView *protocolView;
@property (retain, nonatomic) CJPayDyPaySignOnlyBackwardModel *model;
@property (copy, nonatomic) id /* block */ trackerBlock;
@property (copy, nonatomic) id /* block */ trackerBtmModuleShow;
@property (copy, nonatomic) id /* block */ trackerBtmModuleClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportStdNaviBar;
- (void)trackerWithName:(id)a0 params:(id)a1;
- (void)p_setupConstraints;
- (void)p_trackBTMClick:(id)a0 params:(id)a1;
- (void)p_trackBTMShow:(id)a0 params:(id)a1;
- (id)p_createCloseBarAction;
- (void)currentCountChangeTo:(int)a0;
- (void)p_clickBackAction;
- (void)p_clickConfirmAction;
- (void)p_setupVoucherContentView;
- (void)p_updateWithCurrentCount:(long long)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)hideBackButton;
- (double)containerHeight;
- (void)back;

@end
