@class UIImageView, UILabel, UIView, UIButton;

@interface AWEIMDoubleCheckPopupView : AWEIMBasePopupView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *frontImageView;
@property (retain, nonatomic) UIView *paddingBaseView;
@property (retain, nonatomic) UIImageView *behindImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ confirmActionBlock;
@property (copy, nonatomic) id /* block */ cancelActionBlock;

+ (BOOL)isShowing;

- (void)__show;
- (void)__setupLayout;
- (void)__closeBtnClicked;
- (void)__confirmBtnClicked;
- (void)showWithImageURL:(id)a0 title:(id)a1 desc:(id)a2 buttonTitle:(id)a3 type:(long long)a4;
- (void)__maskViewTapped;
- (void)__contentViewPanned:(id)a0;
- (void)__setupLayoutWithType:(long long)a0;
- (void)__configImageViewWithImageURL:(id)a0 type:(long long)a1;
- (void)__configUIWithTitle:(id)a0 desc:(id)a1 buttonTitle:(id)a2 closeIconName:(id)a3;
- (void)__cancelBtnClicked;
- (void)showWithTitle:(id)a0 desc:(id)a1 buttonTitle:(id)a2 closeIconName:(id)a3;
- (void).cxx_destruct;
- (void)hide;

@end
