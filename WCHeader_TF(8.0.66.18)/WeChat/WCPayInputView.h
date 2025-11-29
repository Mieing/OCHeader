@class UIColor, NSString, UITextField, NSMutableArray;
@protocol WCPayInputViewDelegate;

@interface WCPayInputView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *dots;
@property (nonatomic) long long pwdViewStyle;
@property (nonatomic) long long currentCount;
@property (nonatomic) double startPadding;
@property (weak, nonatomic) id<WCPayInputViewDelegate> delegate;
@property (nonatomic) long long inputCount;
@property (nonatomic) UIColor *fontColor;
@property (nonatomic) long long fontSize;
@property (nonatomic) struct CGSize { double width; double height; } rectangleSize;
@property (nonatomic) long long rectangleMargin;
@property (nonatomic) unsigned long long borders;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UITextField *textField;
@property (nonatomic) BOOL enableResize;
@property (nonatomic) BOOL passwordStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateRectangleSize;
- (void)layoutSubviews;
- (void)layout;
- (void)showDotWithCount:(long long)a0;
- (void)addPasswordBorder:(id)a0;
- (void)updatePwdViewStyle:(long long)a0;
- (void)textFieldDidChange:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void).cxx_destruct;

@end
