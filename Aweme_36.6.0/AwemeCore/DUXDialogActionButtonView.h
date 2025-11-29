@class UILabel, DUXDialogUIConfigModel, DUXAlertDialogAction;

@interface DUXDialogActionButtonView : UIButton

@property (retain, nonatomic) UILabel *interactionMaskView;
@property (nonatomic) unsigned long long enlargeType;
@property (retain, nonatomic) DUXDialogUIConfigModel *uiConfig;
@property (retain, nonatomic) DUXAlertDialogAction *model;
@property (nonatomic) unsigned long long actionsStyle;

+ (double)actionViewHeightWithStyle:(unsigned long long)a0 withUse:(unsigned long long)a1;
+ (double)actionViewHeightWithStyle:(unsigned long long)a0 withUse:(unsigned long long)a1 enlargeType:(unsigned long long)a2 uiConfig:(id)a3;
+ (double)actionViewPadding:(unsigned long long)a0 withUse:(unsigned long long)a1;
+ (id)actionButtonWithActionStyle:(unsigned long long)a0 model:(id)a1;

- (double)actionViewHeight;
- (id)initWithActionStyle:(unsigned long long)a0 model:(id)a1;
- (void)makeNormalButton;
- (void)makeButtonAction;
- (void)showInteractionMask;
- (void)hideInteractionMask;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
