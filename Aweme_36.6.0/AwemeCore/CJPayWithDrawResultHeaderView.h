@class UIImageView, UILabel, NSString;

@interface CJPayWithDrawResultHeaderView : UIView

@property (retain, nonatomic) UIImageView *stateImageView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UILabel *amountValueLabel;
@property (retain, nonatomic) UILabel *amountTitleLabel;
@property (retain, nonatomic) UILabel *reasonLabel;
@property (retain, nonatomic) UILabel *defaultReasonLabel;
@property (retain, nonatomic) UIImageView *disclosureIcon;
@property (retain, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) id /* block */ didTapReasonBlock;
@property (nonatomic) unsigned long long style;

- (void)p_adapterTheme;
- (void)addDisclosureEventToView:(id)a0;
- (void)disclosureReasonEvent:(id)a0;
- (void)updateWithAmountText:(id)a0;
- (void)updateWithErrorMsg:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;

@end
