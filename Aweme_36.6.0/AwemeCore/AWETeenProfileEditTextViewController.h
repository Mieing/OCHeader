@class AWETeenProfileEditItemModel, NSDictionary, NSString, AWEUILoadingView, AWEUserModel;

@interface AWETeenProfileEditTextViewController : AWETextEditViewController <UITextFieldDelegate, UITextViewDelegate, NSLayoutManagerDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *pageFromDict;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWETeenProfileEditItemModel *itemModel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteButtonClicked;
- (long long)maxTextLength;
- (void)setTipLabelForContentTextView;
- (void)saveButtonClicked;
- (void)updateEmptyNumberText;
- (void)editTextFieldDidChange:(id)a0;
- (void)editTextViewDidChange:(id)a0;
- (unsigned long long)textEditStyle;
- (id)initWithEditType:(long long)a0 user:(id)a1;
- (id)preTitleWithType;
- (id)numberWithTypeAndLength:(long long)a0;
- (id)navStringWithType;
- (void)submitChanges:(id)a0;
- (void)setTipLabelForContentTextViewWithMaxLength:(long long)a0;
- (unsigned long long)nicknameTextEditStyle;
- (void).cxx_destruct;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)viewDidLoad;
- (void)textViewDidChange:(id)a0;

@end
