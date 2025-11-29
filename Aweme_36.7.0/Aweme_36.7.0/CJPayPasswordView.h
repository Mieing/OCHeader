@class CJPayStyleErrorLabel, NSString, UIImageView, UIButton, MASConstraint, CJPayStyleButton, UILabel, CJPaySafeInputView;

@interface CJPayPasswordView : UIView <CJPayBaseLoadingProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *safeImageView;
@property (retain, nonatomic) CJPaySafeInputView *safeInputView;
@property (retain, nonatomic) CJPayStyleErrorLabel *errorLabel;
@property (retain, nonatomic) UIButton *forgetPasswordBtn;
@property (retain, nonatomic) CJPayStyleButton *completeButton;
@property (nonatomic) BOOL isInLoading;
@property (retain, nonatomic) MASConstraint *errorLabelTopConstraint;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) id /* block */ forgetButtonTappedBlock;
@property (copy, nonatomic) id /* block */ completeButtonTappedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithPassCodeType:(unsigned long long)a0;
- (void)updateWithPassCodeType:(unsigned long long)a0 title:(id)a1 subTitle:(id)a2;
- (id)p_buildSafetyPassCodeModelBy:(unsigned long long)a0;
- (void)p_updateWithPassCodePageModel:(id)a0;
- (void)p_forgetButtonTapped;
- (void)p_completeButtonTapped;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;

@end
