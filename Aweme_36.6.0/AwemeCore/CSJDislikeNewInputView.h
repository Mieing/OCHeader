@class UIImageView, UITextField, UILabel, CSJDislikeNewRealInputView;
@protocol CSJDislikeNewInputViewDelegate;

@interface CSJDislikeNewInputView : UIView

@property (nonatomic) BOOL showKeyboard;
@property (retain, nonatomic) UITextField *placeholderTextField;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *suggestionLabel;
@property (retain, nonatomic) CSJDislikeNewRealInputView *dislikeNewRealInputView;
@property (nonatomic) BOOL validInputAccessoryView;
@property (weak, nonatomic) id<CSJDislikeNewInputViewDelegate> delegate;

- (void)setDarkStyle;
- (void)setLightStyle;
- (void)uiKeyboardWillShowNotification:(id)a0;
- (void)uiKeyboardDidShowNotification:(id)a0;
- (void)uiKeyboardWillHideNotification:(id)a0;
- (void)uiKeyboardDidHideNotification:(id)a0;
- (void)handleCustomAccessoryViewWithNotification:(id)a0;
- (double)inputViewRealHeight;
- (double)backupInputViewRealHeight;
- (void)hideKeyboard;
- (void).cxx_destruct;
- (id)inputAccessoryView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;

@end
