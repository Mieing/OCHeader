@class NSString, UITextField, UIView, UIButton;

@interface DUXStepper : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIButton *addButton;
@property (retain, nonatomic) UIButton *subtractButton;
@property (retain, nonatomic) UITextField *textField;
@property (nonatomic) double maxScale;
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic) double value;
@property (nonatomic) double step;
@property (copy, nonatomic) id /* block */ valChangeBlock;
@property (copy, nonatomic) id /* block */ endEditBlock;
@property (retain, nonatomic) UIView *inputAccessoryView;
@property (nonatomic) long long keyboardAppearance;
@property (copy, nonatomic) NSString *maxToastString;
@property (copy, nonatomic) NSString *minToastString;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } interactionZoneEnlargeInsets;
@property (nonatomic) unsigned long long enlargeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateFrameIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enlargeType:(unsigned long long)a1;
- (id)initWithEnlargeType:(unsigned long long)a0;
- (void)setUI;
- (BOOL)canInteractToPoint:(struct CGPoint { double x0; double x1; })a0 withView:(id)a1;
- (void)setColor;
- (void)buttonClicked:(id)a0;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (void)textFieldDidEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)endEditing:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
