@class CJPayStandardSwitch, CJPayCoupleLabelView, UIImageView, UILabel, UIView, CJPayDyPayPlusXViewModel;

@interface CJPayDyPayPlusXHeaderView : UIView

@property (retain, nonatomic) UIView *titleContentView;
@property (retain, nonatomic) UIView *preTitleContentView;
@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CJPayCoupleLabelView *voucherView;
@property (retain, nonatomic) UIView *controlView;
@property (retain, nonatomic) CJPayStandardSwitch *switchView;
@property (retain, nonatomic) UILabel *buttonLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UIImageView *foldArrowImageView;
@property (nonatomic) BOOL isFold;
@property (retain, nonatomic) CJPayDyPayPlusXViewModel *viewModel;
@property (nonatomic) BOOL isQuality;
@property (copy, nonatomic) id /* block */ headerViewSwitchDidClick;
@property (copy, nonatomic) id /* block */ headerViewDidClick;
@property (copy, nonatomic) id /* block */ headerViewFoldArrowDidClick;

- (id)initWithIsQuality:(BOOL)a0;
- (void)changeUIBySwitchStatus:(BOOL)a0;
- (void)p_updatePreTitleContentView;
- (void)p_updateControlView;
- (void)p_updateVoucherViewConstraints;
- (void)p_finishAllConstraintsAndUI;
- (void)p_finishSwitchConstraintsAndUIWithSwitchStatus:(BOOL)a0;
- (void)p_setupTitleContentView;
- (void)p_setupControlView;
- (void)p_updateUIWithSwitch;
- (void)p_updateUIWithDownArrow;
- (void)p_updateUIWithButton;
- (void)p_hiddenControlView;
- (void)p_updateUIWithPlusXViewHidden;
- (void)p_showTitleAndVoucherInOneLine;
- (void)p_showTitleAndVoucherInTowLine;
- (void)p_finishFoldArrowConstraintsAndUI;
- (void)p_finishButtonStyleConstraintsAndUI;
- (void)p_finishHiddenControlViewConstraintsAndUI;
- (void)p_hideAllControlSubview;
- (void)p_changeFoldStatus:(BOOL)a0;
- (void)p_removeAllGesture;
- (void)p_tapFoldArrow;
- (void)p_plusXDidTapped;
- (void)p_switchDidClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)updateWithViewModel:(id)a0;
- (BOOL)isSwitchOn;

@end
