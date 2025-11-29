@class AWEIMMessageConversation, NSString, UITextView, UIView;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMGroupAliasEditViewController : AWETextEditViewController <AWEIMViewControllerInHalfSceenProtocol, IESIMGroupAliasEditViewControllerProtocol>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSString *groupAlias;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL shownInHalfScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITextView *contentTextView;

- (void)deleteButtonClicked;
- (id)conversationDataManager;
- (void)saveButtonClicked;
- (void)updateEmptyNumberText;
- (void)editTextFieldDidChange:(id)a0;
- (void)__clickBlank;
- (double)minViewHeightForHalfScreen;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithConversation:(id)a0;

@end
