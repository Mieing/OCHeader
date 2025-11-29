@class UIView, NSString, UITapGestureRecognizer, NSArray, UITextField, NSMutableArray, MMUILabel, MMTableView, NSIndexPath;

@interface WCSettingQuickRepliesController : WCWatchSettingCommonViewController <WCActionSheetDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UITextViewDelegate, WCActionSheetDelegate, UIGestureRecognizerDelegate> {
    MMTableView *_mainTableView;
    MMUILabel *_footerLabel;
    UIView *_replyAddedView;
    UITextField *_textField;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardRect;
    BOOL _edited;
    UITapGestureRecognizer *_hideKeyboardGesture;
    NSArray *_defaultQuickReplies;
    NSIndexPath *_selectedIndexPath;
    float _lastContenOffsetY;
    BOOL _editing;
}

@property (retain, nonatomic) NSMutableArray *quickReplies;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsetWhenKeyBoardHide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)hideKeyboardAction:(id)a0;
- (void)editingBeginAction:(id)a0;
- (void)editingFinishedAction:(id)a0;
- (void)resetQuickRepliesAction:(id)a0;
- (void)addQuickReplyAction:(id)a0;
- (void)updateQuickReplies:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)setNavItemWithTitle:(id)a0 action:(SEL)a1;
- (void)initUI;
- (void)setDefaultReply;
- (void)updateFooterLabel;
- (void)updateTextField;
- (void)saveQuickRepliesInFileAndTransferToWatch;
- (void).cxx_destruct;

@end
