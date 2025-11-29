@class NSArray, DUXDialogUIConfigModel, UIStackView;
@protocol DUXAlertDialogActionViewDelegate;

@interface DUXAlertDialogActionView : UIView

@property (retain, nonatomic) UIStackView *contentView;
@property (nonatomic) unsigned long long actionsStyle;
@property (nonatomic) unsigned long long actionsDirection;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) double stackBottomOffset;
@property (retain, nonatomic) DUXDialogUIConfigModel *uiConfig;
@property (weak, nonatomic) id<DUXAlertDialogActionViewDelegate> delegate;
@property (nonatomic) unsigned long long enlargeType;
@property (nonatomic) double alertDialogWidth;
@property (nonatomic) double alertDialogHorizontalPadding;

- (void)setupButtonAction;
- (id)initWithActionsStyle:(unsigned long long)a0 alertDialogWidth:(double)a1 alertDialogHorizontalPadding:(double)a2 actionsDirection:(unsigned long long)a3 actions:(id)a4;
- (void)clickActionWithModel:(id)a0;
- (void)updateActionViewConstraints;
- (id)initWithActionsStyle:(unsigned long long)a0 alertDialogWidth:(double)a1 alertDialogHorizontalPadding:(double)a2 actionsDirection:(unsigned long long)a3 actions:(id)a4 uiConfig:(id)a5;
- (double)contentNormalStackViewHeight;
- (double)contentButtonStackViewHeight;
- (void)setupNormalAction;
- (void)countDownActionWithModel:(id)a0;
- (void)clickLinkTextActionWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
