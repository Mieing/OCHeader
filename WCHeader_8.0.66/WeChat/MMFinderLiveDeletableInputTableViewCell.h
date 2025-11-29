@class NSString, UITextField, UIView, MMUIButton, UIPanGestureRecognizer;

@interface MMFinderLiveDeletableInputTableViewCell : UITableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) MMUIButton *deleteButton;
@property (retain, nonatomic) UITextField *textField;
@property (retain, nonatomic) MMUIButton *confirmDeleteButton;
@property (retain, nonatomic) UIPanGestureRecognizer *pan;
@property (nonatomic) BOOL isInDeleteState;
@property (nonatomic) BOOL isEditing;
@property (copy, nonatomic) id /* block */ shouldBeginEditingCallback;
@property (copy, nonatomic) id /* block */ didEndEditingCallback;
@property (copy, nonatomic) id /* block */ deleteCallback;
@property (copy, nonatomic) id /* block */ deleteStateCallback;
@property (copy, nonatomic) id /* block */ shouldEndEditingCheckCallback;
@property (copy, nonatomic) id /* block */ editingChangedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)customLayoutSubviews;
- (void)customizeTextField:(id)a0;
- (void)endEditing;
- (void)beginEditing;
- (void)innerSetDeleteState:(BOOL)a0 animated:(BOOL)a1;
- (void)setDeleteState:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)didClickDelete;
- (void)didClickConfirmDelete;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)clearText;
- (void)textFieldDidChangeContent:(id)a0;
- (long long)textFieldWordLimit;
- (void).cxx_destruct;

@end
