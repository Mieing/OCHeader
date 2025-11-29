@class UIView, NSString, IESLiveCommentEmoticonPanelView, HTSEventContext, UITextView, UIImageView, UIButton, NSMutableArray, IESLiveEmojiTextParser, UITableView, UILabel, NSDictionary;

@interface IESLiveFrequentCommentPopupView : UIView <UITextViewDelegate, UITableViewDelegate, UITableViewDataSource, IESLiveCommentPopupViewProtocol>

@property (nonatomic) long long inputCountLimit;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *saveBtn;
@property (retain, nonatomic) UITextView *inputView;
@property (retain, nonatomic) UITextView *placeHolderLabel;
@property (retain, nonatomic) UIButton *closeEditInteractionArea;
@property (retain, nonatomic) UIView *tableViewTitle;
@property (retain, nonatomic) NSString *originText;
@property (retain, nonatomic) UIImageView *emojiItem;
@property (nonatomic) BOOL emojiPanelShow;
@property (retain, nonatomic) IESLiveCommentEmoticonPanelView *emojiPanelView;
@property (retain, nonatomic) IESLiveEmojiTextParser *textParser;
@property (copy, nonatomic) id /* block */ saveText;
@property (copy, nonatomic) id /* block */ duplicateCheck;
@property (retain, nonatomic) NSMutableArray *recommendedCommentsList;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ popupBack;
@property (copy, nonatomic) id /* block */ heightChange;

- (void)didSetAttachingDIContext;
- (void)disableLocalizations;
- (void)trackAlertViewShow;
- (void)removeKeyboardObservers;
- (void)addKeyboardObservers;
- (void)panelWillHide;
- (double)getCurrentTextViewLengthWithTexView:(id)a0 cutTextWhenBeyondLimit:(BOOL)a1;
- (BOOL)checkTextViewIfReachMaxLengthWithInsertText:(id)a0 replaceLength:(long long)a1;
- (void)tapEmojiIcon:(id)a0;
- (void)closeEditInteraction;
- (void)setupEmojiPanel;
- (void)trackHeaderViewClickWithOptionSave:(BOOL)a0;
- (void)trackAlertViewClickWithOptionSave:(BOOL)a0;
- (void)dismissEmojiPanel;
- (void)openEmojiPanel;
- (void)trackRecommendedListTap;
- (id)initWithText:(id)a0 emojiView:(id)a1;
- (void)showRecommendedContentList;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)keyboardWillShow:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)save;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)insertText:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)dealloc;
- (void)cancel;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupTableView;
- (void)setupViews;
- (void)backspace;

@end
