@class NSString, UITextField, UIImageView, UIView, UIButton;
@protocol ACCHashTagSearchBarDelegate;

@interface ACCHashTagSearchBar : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIImageView *searchIconView;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) double cancelButtonWidth;
@property (weak, nonatomic) id<ACCHashTagSearchBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showCancelButton:(BOOL)a0;
- (BOOL)textBarBecomeResponder;
- (BOOL)textBarResignResponder;
- (void)setupConstraints;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)keyboardWillShow:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void)keyboardWillHide:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;
- (void)setInputText:(id)a0;
- (id)inputText;
- (void)setupUI;
- (void)cancelButtonTapped;
- (void)addObservers;

@end
