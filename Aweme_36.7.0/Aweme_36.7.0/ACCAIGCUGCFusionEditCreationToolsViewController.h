@class ACCAIGCUGCFusionCreationToolsFrameReferenceView, UIPanGestureRecognizer, ACCAIGCUGCFusionCreationToolsAIView, UILabel, ACCAIGCUGCFusionCreationToolsMediaTypeView, ACCAIGCUGCFusionCreationToolsManager, UIView, UILongPressGestureRecognizer, DUXButton, ACCAIGCUGCFusionCreationToolsDataController, UITextView, NSString, NSNumber, ACCAIGCUGCFusionRecommendTagsViewController;
@protocol ACCAIGCUGCFusionEditCreationToolsViewControllerDelegate;

@interface ACCAIGCUGCFusionEditCreationToolsViewController : UIViewController <ACCAIGCUGCFusionCreationToolsManagerDelegate, UIGestureRecognizerDelegate, ACCAIGCUGCFusionEditCreationToolsViewControllerProtocol>

@property (retain, nonatomic) ACCAIGCUGCFusionCreationToolsDataController *dataController;
@property (retain, nonatomic) ACCAIGCUGCFusionCreationToolsManager *creationToolsManager;
@property (nonatomic) double inputContainerViewHeight;
@property (retain, nonatomic) UIView *inputContainerView;
@property (retain, nonatomic) UITextView *textInputView;
@property (retain, nonatomic) UILabel *textInputPlaceHolderView;
@property (retain, nonatomic) UIView *textInputTopGradientView;
@property (retain, nonatomic) ACCAIGCUGCFusionCreationToolsAIView *aiButton;
@property (readonly, nonatomic) UIView *frameReferenceListView;
@property (retain, nonatomic) ACCAIGCUGCFusionRecommendTagsViewController *recommendTagsViewController;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) ACCAIGCUGCFusionCreationToolsFrameReferenceView *frameReferenceView;
@property (retain, nonatomic) DUXButton *completeButton;
@property (nonatomic) BOOL hasOtherViewRespond;
@property (retain, nonatomic) UILongPressGestureRecognizer *touchGesture;
@property (retain, nonatomic) NSNumber *fontWidthNum;
@property (retain, nonatomic) UIPanGestureRecognizer *downwardPan;
@property (nonatomic) BOOL isStartInRecommendVC;
@property (readonly, nonatomic) ACCAIGCUGCFusionCreationToolsMediaTypeView *horizontalMediaTypeView;
@property (weak, nonatomic) id<ACCAIGCUGCFusionEditCreationToolsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowLawViewController;
+ (void)showLawViewControllerWithConfirmBlock:(id /* block */)a0 didDismissBlock:(id /* block */)a1;

- (BOOL)aiAutoPromptWithIsRequesting:(BOOL)a0;
- (void)frameReferenceDidClicked;
- (void)updateWithPublishModel:(id)a0 containerViewHeight:(double)a1;
- (void)scrollTextRangeToVisible;
- (void)textViewBecomeFirstResponder;
- (void)textViewResignFirstResponder;
- (void)updateByModelDidChangedWithEnterModel:(id)a0;
- (void)updateTextInputPlaceHolderViewWithModel:(id)a0;
- (id)textInputViewAttributedText;
- (void)updateModelCreateBodyByEditModel;
- (BOOL)isRequestAIAutoPrompt;
- (void)handleDownwardPan:(id)a0;
- (void)setupGesture;
- (void)preloadData;
- (void)updateUIByData;
- (void)bindService;
- (void)frameReferenceHasSetImage;
- (void)frameReferenceHasReset;
- (void)frameReferenceCloseButtonDidClicked;
- (id)creationToolsContainerViewController;
- (void)keyboardWillShowCompletionNotification:(id)a0;
- (void)keyboardWillHideCompletionNotification:(id)a0;
- (void)frameReferenceRequestedAuthorizationCompletion;
- (void)updateFrameReferenceUICompletion;
- (BOOL)aiButtonDidClickedShouldForward;
- (void)textViewDidChangeActionCompletion;
- (void)updateAiButtonLayout;
- (void)updateCompleteButtonIfNeeded;
- (void)updateUIByEnterType;
- (void)updateTextInputPlaceHolderView;
- (void)completeButtonDidCliked;
- (void)setupUIV2;
- (void)fetchRecommendTags;
- (void)aiMateEditTaskFinalSuccessNotification:(id)a0;
- (BOOL)canEndEditing;
- (void)handleSelectionChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cursorPosition;
- (void)handleTouchGesture:(id)a0;
- (void)viewDidLoad;
- (void)resetAllData;
- (void)setUpUI;

@end
