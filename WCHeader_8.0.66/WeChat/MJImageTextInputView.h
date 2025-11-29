@class NSString, MMGrowTextView, NSLayoutConstraint, MMUIButton;
@protocol MJImageTextInputViewDelegate;

@interface MJImageTextInputView : UIView <MMGrowTextViewDelegate>

@property (retain, nonatomic) MMGrowTextView *textView;
@property (retain, nonatomic) NSLayoutConstraint *textHeightConstraint;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (retain, nonatomic) MMUIButton *clearButton;
@property (nonatomic) BOOL showKeyboradInProgress;
@property (weak, nonatomic) id<MJImageTextInputViewDelegate> delegate;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *placeholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupViews;
- (void)_layoutViews;
- (void)doneButtonDidTap;
- (void)clearButtonDidTap;
- (BOOL)isEditing;
- (void)beginEditing;
- (void)endEditing;
- (void)TextViewHeightDidChanged:(id)a0;
- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)keyboardWillShow:(double)a0;
- (void)keyboardDidShow:(double)a0;
- (void)keyboardWillHide:(BOOL)a0;
- (void)MMGrowTextViewBeginEditing:(id)a0;
- (void)MMGrowTextViewEndEditing:(id)a0;
- (void)_updateClearButton;
- (void).cxx_destruct;

@end
