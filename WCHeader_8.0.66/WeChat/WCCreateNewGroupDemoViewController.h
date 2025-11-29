@class NSString, UITextField, MMTableViewInfo, MMUILabel;
@protocol WCCreateNewGroupDemoViewControllerDelegate;

@interface WCCreateNewGroupDemoViewController : MMUIViewController <MMTableViewInfoDelegate, UITextFieldDelegate> {
    BOOL bWaitParentViewControllerDismissWhenDone;
}

@property (weak, nonatomic) id<WCCreateNewGroupDemoViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *existTagName;
@property (retain, nonatomic) NSString *tagSvrName;
@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (retain, nonatomic) UITextField *tagNameEditTextField;
@property (nonatomic) BOOL bIsTagNameOverLimit;
@property (nonatomic) BOOL bIsShowWarningText;
@property (retain, nonatomic) MMUILabel *warningTextLabel;
@property (retain, nonatomic) NSString *tagNamePlaceHolder;
@property (retain, nonatomic) NSString *hintText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlaceHolder:(id)a0 hintText:(id)a1 withDelegate:(id)a2;
- (void)viewDidLoad;
- (void)setWaitParentViewControllerDismissWhenDone:(BOOL)a0;
- (void)dismissViewController;
- (void)onReturn;
- (void)onDone;
- (void)initTableViewInfoData;
- (void)makeTopicEditView;
- (void)makeEditCell:(id)a0 CellInfo:(id)a1;
- (void)showWarningText:(id)a0;
- (void)hideWarningText;
- (void)makeWarningTextCell:(id)a0 CellInfo:(id)a1;
- (BOOL)isChangeTagName;
- (void)setSaveButtonEnable:(BOOL)a0;
- (void)checkSaveAlert;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)onTagNameChanged:(id)a0;
- (void).cxx_destruct;

@end
