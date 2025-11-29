@class UIStackView, UIView, NSString, AWEIMGlobalToastViewModel, UIImageView, UIButton, AWEIMSecurityGlobalToastContentConfigModel_UIConfig_ButtonBody, NSMutableArray, YYLabel;
@protocol AWEIMSecurityFullScreenViewDelegate;

@interface AWEIMSecurityFullScreenCardView : UIView <AWEIMRendererProtocol>

@property (retain, nonatomic) UIImageView *headImagView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) UIView *seperatorLineView;
@property (retain, nonatomic) AWEIMGlobalToastViewModel *viewModel;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (retain, nonatomic) UIStackView *checkboxStackView;
@property (retain, nonatomic) NSMutableArray *selectViewArray;
@property (retain, nonatomic) UIButton *highlightButton;
@property (retain, nonatomic) AWEIMSecurityGlobalToastContentConfigModel_UIConfig_ButtonBody *highlightButtonModel;
@property (weak, nonatomic) id<AWEIMSecurityFullScreenViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)__addConstraints;
- (void)configCheckboxWithModel:(id)a0;
- (void)configButtonsWithModel:(id)a0;
- (double)__checkboxHeight;
- (void)onTapGes:(id)a0;
- (double)__contentBottom;
- (void)__updateHighlightButtonState;
- (id)p_createButtonWithButtonModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
