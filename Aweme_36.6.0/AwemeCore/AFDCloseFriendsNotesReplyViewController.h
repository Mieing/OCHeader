@class UIButton, UIPanGestureRecognizer, NSString, AFDCloseFriendsNotesReplyViewModel, UIView, AFDCloseFriendsNotesReplyPanelView, UIViewController;
@protocol AWEIMQuickInputViewControllerProtocol, AFDCloseFriendsBubblePanelDelegate, AFDCloseFriendsBubblePanelDataSource;

@interface AFDCloseFriendsNotesReplyViewController : UIViewController <AWEIMQuickInputViewControllerDelegate>

@property (retain, nonatomic) UIViewController<AWEIMQuickInputViewControllerProtocol> *quickInputViewController;
@property (retain, nonatomic) AFDCloseFriendsNotesReplyPanelView *panelView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UIPanGestureRecognizer *panDismissGesture;
@property (nonatomic) BOOL isPanelShowing;
@property (retain, nonatomic) AFDCloseFriendsNotesReplyViewModel *viewModel;
@property (weak, nonatomic) id<AFDCloseFriendsBubblePanelDataSource> dataSource;
@property (weak, nonatomic) id<AFDCloseFriendsBubblePanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBinding;
- (void)updateAwemeModel:(id)a0;
- (void)didSendContent:(id)a0 textView:(id)a1 userInfo:(id)a2;
- (BOOL)shouldSendContent:(id)a0 textView:(id)a1 userInfo:(id)a2;
- (id)inputViewControllerEmptyStateButton;
- (void)didGetAweme:(id)a0;
- (void)requestAwemeWithItemId:(id)a0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)showKeyboard;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)show;
- (id)bubble;
- (void)setupUI;
- (void)handlePanGesture:(id)a0;

@end
