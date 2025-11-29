@class AWEIMMessageConversation, NSString, UITextView, UIView;
@protocol IESIMLoadingViewProtocol;

@interface AWEIMGroupNameEditViewController : AWETextEditViewController <AWEIMViewControllerInHalfSceenProtocol, AWERouterViewControllerProtocol, IESIMGroupNameEditViewControllerProtocol>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL shownInHalfScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITextView *contentTextView;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)saveButtonClicked;
- (void)updateEmptyNumberText;
- (void)editTextFieldDidChange:(id)a0;
- (void)__clickBlank;
- (double)minViewHeightForHalfScreen;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithConversation:(id)a0;

@end
