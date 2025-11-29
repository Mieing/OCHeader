@class UIButton, NSString, UIImageView, UITextField, UIView, UITapGestureRecognizer;
@protocol MAOfflineSearchViewDelegate;

@interface MAOfflineSearchView : UIView <UITextFieldDelegate>

@property (nonatomic) long long state;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UITextField *textField;
@property (copy, nonatomic) NSString *currentSearchString;
@property (weak, nonatomic) id<MAOfflineSearchViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildSearchView;
- (void)clearButtonAction:(id)a0;
- (void)hideKeyboard;
- (void).cxx_destruct;
- (void)showKeyboard;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)setState:(long long)a0 animated:(BOOL)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (void)updateCurrentState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)textFieldDidChange:(id)a0;
- (void)stopEditing;
- (void)tapGestureRecognizerAction:(id)a0;

@end
