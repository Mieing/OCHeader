@class BDPUniqueID, NSString, UIView, BDPInputViewModel, BDPTCEmbed;

@interface BDPInputView : UITextField <UITextFieldDelegate> {
    BOOL _canRetryBecomeFirstResponder;
    long long _keyboardProgress;
    BDPUniqueID *_uniqueID;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalPageFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _originalRootNavFrame;
}

@property BOOL interruptAdjustFrameWithKeyBoardShow;
@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *componentID;
@property (retain, nonatomic) BDPInputViewModel *model;
@property (weak, nonatomic) BDPTCEmbed *embed;
@property (weak, nonatomic) UIView *page;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rootNavigationController:(id)a0;

- (void)textFieldTextChanged:(id)a0;
- (id)initWithModel:(id)a0 uniqueID:(id)a1;
- (void)updateCursorAndSelection:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)updateWithDictionary:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)willMoveToWindow:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;
- (void)keyboardWillChange:(id)a0;
- (void)updateText:(id)a0;
- (void)setupViews;

@end
