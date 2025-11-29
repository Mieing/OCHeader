@class UIView, CJPayStandardButtonListView, CJPayStandardAlertModel, CJPayStandardAlertInputView, CJPayStandardFeatureEntryView, UIImageView, UIButton, CJPayStandardAlertMessageView, UILabel;

@interface CJPayStandardAlertView : UIView

@property (copy, nonatomic) id /* block */ clickedButtonAtIndex;
@property (copy, nonatomic) id /* block */ inputEditDidChange;
@property (copy, nonatomic) id /* block */ clickedCloseButton;
@property (copy, nonatomic) id /* block */ clickTitleActionBlock;
@property (copy, nonatomic) id /* block */ clickTopRightActionBlock;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *titleIconImageView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleActionImageView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *topRightButton;
@property (retain, nonatomic) CJPayStandardAlertMessageView *messageView;
@property (retain, nonatomic) CJPayStandardButtonListView *buttonListView;
@property (retain, nonatomic) CJPayStandardFeatureEntryView *featureEntryView;
@property (retain, nonatomic) CJPayStandardAlertInputView *alertInputView;
@property (retain, nonatomic) CJPayStandardAlertModel *alertModel;

- (void)clickCloseButton:(id)a0;
- (void)p_addSubView;
- (id)initWithAlertModel:(id)a0;
- (void)p_makeUI;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_getLastCharBounds:(id)a0 contentView:(id)a1 width:(double)a2;
- (id)p_configLeftCloseButton;
- (id)p_configTopRightButton:(id)a0;
- (id)p_configTitleIcon:(id)a0;
- (id)p_configTitleArea:(id)a0;
- (id)p_configSubTitleArea:(id)a0;
- (id)p_configMessageArea:(id)a0;
- (id)p_configCustomArea:(id)a0;
- (id)p_configFeatureTitle:(id)a0;
- (id)p_configInputArea:(id)a0;
- (id)p_configButtonArea:(id)a0;
- (void)clickTopRightActionButton:(id)a0;
- (void)clickTitleActionButton:(id)a0;
- (void)clickActionButton:(id)a0;
- (void)changeTitleIconSize:(struct CGSize { double x0; double x1; })a0;
- (void)alertViewResignFirstResponder;
- (void).cxx_destruct;

@end
