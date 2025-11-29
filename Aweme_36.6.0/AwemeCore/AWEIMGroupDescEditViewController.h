@class UITextView, NSString, NSDictionary, UIViewController;
@protocol IESIMGroupDescEditViewControllerDelegate;

@interface AWEIMGroupDescEditViewController : AWEIMGroupNoticeEditViewController <IESIMGroupDescEditViewControllerProtocol>

@property (copy, nonatomic) NSString *draft;
@property (nonatomic) BOOL trackClickPopup;
@property (copy, nonatomic) NSString *naviTitle;
@property (copy, nonatomic) NSString *placeHoldText;
@property (copy, nonatomic) NSString *confirmTitle;
@property (nonatomic) BOOL disableTemplate;
@property (nonatomic) BOOL disableEditMode;
@property (weak, nonatomic) id<IESIMGroupDescEditViewControllerDelegate> delegate;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (weak, nonatomic) UIViewController *groupSettingVC;
@property (retain, nonatomic) UITextView *contentTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void)backButtonClicked;
- (id)templateTitle;
- (void)disableEdit;
- (void)setShouldSaveChange:(BOOL)a0;
- (void)saveButtonClicked;
- (id)initWithDraft:(id)a0;
- (BOOL)__isInterestGroupStyle;
- (BOOL)__contentHasChanged;
- (id)pageContentText;
- (id)initWithConversation:(id)a0 pageTitle:(id)a1 placeHoldText:(id)a2 confirmTitle:(id)a3 disableTemplate:(BOOL)a4;
- (long long)maxContentLength;
- (id)pagePreTitle;
- (id)pagePlaceHolder;
- (id)templateLabelText;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (id)pageTitle;

@end
