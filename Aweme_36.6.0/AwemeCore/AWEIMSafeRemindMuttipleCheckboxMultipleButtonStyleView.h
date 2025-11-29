@class UIStackView, AWEIMSecurityToastConfigButtonModel, NSMutableArray, UIButton;

@interface AWEIMSafeRemindMuttipleCheckboxMultipleButtonStyleView : AWEIMSafeRemindView

@property (retain, nonatomic) UIStackView *checkboxStackView;
@property (retain, nonatomic) NSMutableArray *selectViewArray;
@property (retain, nonatomic) UIButton *highlightButton;
@property (retain, nonatomic) AWEIMSecurityToastConfigButtonModel *highlightButtonModel;

- (id)colorInLightTheme:(long long)a0;
- (double)__checkboxHeight;
- (void)onTapGes:(id)a0;
- (double)__contentBottom;
- (void)__updateHighlightButtonState;
- (BOOL)checkValid;
- (id)p_createButtonWithButtonModel:(id)a0 configModel:(id)a1;
- (void)configBottomView:(id)a0 configModel:(id)a1;
- (void)configCheckboxesWithModel:(id)a0;
- (void)configButtons:(id)a0 withModel:(id)a1;
- (BOOL)hasCheckbox;
- (void)setupHighlightButtonWithEnableState:(BOOL)a0;
- (void).cxx_destruct;

@end
