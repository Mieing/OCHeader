@class NSString, UITextField, UIImageView, UIView, UIButton;
@protocol ACCTagsSearchBarDelegate;

@interface ACCTagsSearchBar : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIImageView *searchIconView;
@property (retain, nonatomic) UIView *leftView;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) double cancelButtonWidth;
@property (retain, nonatomic) UIView *rightView;
@property (weak, nonatomic) id<ACCTagsSearchBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidChanged:(id)a0;
- (double)searchBarHeight;
- (id)initWithLeftView:(id)a0 leftViewWidth:(double)a1 rightView:(id)a2;
- (void)handleClearButtonClicked;
- (void)handleTextDidChangeWithNewText:(id)a0;
- (id)cutText:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)cancelButtonTapped;

@end
