@class UITextView, NSString, UIView, UIButton;
@protocol ACCNLETextLayerEditContainerDelegate;

@interface ACCNLETextLayerEditContainer : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIView *textViewContent;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UITextView *textView;
@property (nonatomic) double keyboardHeight;
@property (weak, nonatomic) id<ACCNLETextLayerEditContainerDelegate> delegate;
@property (copy, nonatomic) id /* block */ updateTextLayerCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startEditTextWithText:(id)a0;
- (void)p_doLayout;
- (void)confirmBtnClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)keyboardWillChangeFrame:(id)a0;
- (void)setupTextView;
- (void)p_addObservers;
- (void)p_updateFrame;

@end
