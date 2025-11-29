@class NSString, UITextField, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveSensitiveInputView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UITextField *inputTextField;
@property (retain, nonatomic) UILabel *placeholdLabel;
@property (retain, nonatomic) UIImageView *sliderBlock;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UILabel *rightTipLabel;
@property (retain, nonatomic) UIButton *refreshButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ sendBlock;
@property (copy, nonatomic) id /* block */ reachMaxBlock;
@property (nonatomic) long long verifyTimeout;
@property (nonatomic) long long maxLength;
@property (retain, nonatomic) NSString *placeHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showInputView;
- (BOOL)inputViewShowing;
- (void)hiddenInputView;
- (void)textFieldEditChange:(id)a0;
- (void)p_showTipsWhenReachMax:(id)a0;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
