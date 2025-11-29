@class NSString, UITextView;

@interface LynxUITextArea : LynxUIBaseInput <UITextViewDelegate>

@property (nonatomic) double preHeight;
@property (retain, nonatomic) NSString *lastValue;
@property (nonatomic) long long maxlines;
@property (retain, nonatomic) UITextView *placeholderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)__lynx_prop_config__631;
+ (id)__lynx_prop_config__580;
+ (id)__lynx_prop_config__672;
+ (id)__lynx_ui_method_config__1213;

- (void)layoutDidFinished;
- (void)updateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 border:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 withLayoutAnimation:(BOOL)a4;
- (void)propsDidUpdate;
- (void)setBounces:(BOOL)a0 requestReset:(BOOL)a1;
- (id)getContentSize;
- (void)setValue:(id)a0 withResult:(id /* block */)a1;
- (void)setShowSoftInputOnFocus:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setMaxLines:(long long)a0 requestReset:(BOOL)a1;
- (void)inputWillBeFilteredFrom:(id)a0 to:(id)a1;
- (struct CGSize { double x0; double x1; })adjustViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)inputViewDidChange:(id)a0;
- (id)getAttributedString;
- (long long)calcLines:(id)a0 firstRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 lastRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)trimToMaxlines:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (id)createView;
- (id)getText;

@end
