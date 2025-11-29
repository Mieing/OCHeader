@class CJPayStandardSwitch, CJPaySelectionItemModel, UIView, CJPayLabel, CJPayStyleCheckBox;

@interface CJPaySelectionItemView : UIView

@property (retain, nonatomic) CJPayStyleCheckBox *checkBox;
@property (retain, nonatomic) CJPayStandardSwitch *switchButton;
@property (retain, nonatomic) CJPayLabel *titleLabel;
@property (retain, nonatomic) CJPayLabel *descLabel;
@property (retain, nonatomic) UIView *clickView;
@property (retain, nonatomic) CJPaySelectionItemModel *model;
@property (copy, nonatomic) id /* block */ checkBoxClickBlock;

- (void)p_updateConstraint;
- (void)agreeCheckBoxTapped;
- (id)p_curInteractionView;
- (double)p_textFontSize;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isChecked;
- (void)updateWithModel:(id)a0;

@end
