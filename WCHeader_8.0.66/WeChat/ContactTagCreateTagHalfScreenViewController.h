@class MMUILabel, NSString, MMPageSheetAdapter, MMUIView, MMUITextField, MMUIButton, UIButton;
@protocol ContactTagCreateTagHalfScreenViewControllerDelegate;

@interface ContactTagCreateTagHalfScreenViewController : MMUIHalfScreenViewController <UITextFieldDelegate, IContactLabelMgrExt> {
    UIButton *m_modifyAliasButton;
    MMUIView *m_contentView;
    MMUILabel *m_titleView;
    MMUIView *m_inputTextFieldBackground;
    MMUITextField *m_inputTextField;
    MMUILabel *m_warningView;
    unsigned int m_curEventID;
    double m_fKeyboardHeight;
    MMUIButton *_closeButton;
}

@property (retain, nonatomic) NSString *createDefaultTagName;
@property (retain, nonatomic) NSString *oldTagName;
@property (retain, nonatomic) NSString *targetTagName;
@property (weak, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (nonatomic) BOOL isInPageSheetMode;
@property (weak, nonatomic) id<ContactTagCreateTagHalfScreenViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTitleInPageSheetModeIfNeeded:(id)a0;
- (double)getContentViewYInPageSheetMode;
- (double)getContentViewWidth;
- (double)getVisibleHeight;
- (void)onCancelInPageSheetMode:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)initData;
- (long long)halfViewControllerHeight;
- (void)initNotificationObservers;
- (id)closeButton;
- (void)layoutView;
- (void)layoutContentView;
- (void)layoutTitleView;
- (void)layoutInputTextView;
- (void)layoutWarningView;
- (void)layoutModifyAliasButton;
- (void)ShowWarningText:(id)a0;
- (void)HideWarningText;
- (void)DismissTagViewcontrollerAnimated;
- (void)OnSettingAccountModifyAlias;
- (void)onClickClose:(id)a0;
- (void)hideKeyboard;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldTextDidChange:(id)a0;
- (void)saveEditTag;
- (void)onAddContactLabel:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (void)updateContactLabelName:(id)a0 withRetCode:(int)a1 andEventId:(unsigned int)a2;
- (id)navigationBarBackgroundColor;
- (void)setCloseButton:(id)a0;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)a0;
- (void).cxx_destruct;

@end
