@class UIView, UILabel, NSString, UIImageView, UIButton, AWEIMSchoolGroupManager, UITextField, NSDictionary, IESIMButton, AWEIMSchoolGroupCreateGroupViewModel, AWEIMSchoolGroupTracker;
@protocol AWEIMGroupChatPanelControllerDelegate, IESIMCustomModalTransitionContext;

@interface AWEIMSchoolGroupCreateGroupViewController : UIViewController <UITextFieldDelegate, IESIMCustomModalTransitionVCProtocol, YYTextKeyboardObserver, AWERouterViewControllerProtocol, AWEIMGroupChatPanelProtocol>

@property (readonly, nonatomic) AWEIMSchoolGroupManager *manager;
@property (readonly, nonatomic) AWEIMSchoolGroupTracker *tracker;
@property (retain, nonatomic) AWEIMSchoolGroupCreateGroupViewModel *viewModel;
@property (readonly, nonatomic) UIView *topRegion;
@property (readonly, nonatomic) UIButton *closeButton;
@property (readonly, nonatomic) UIButton *confirmButton;
@property (readonly, nonatomic) IESIMButton *avatarView;
@property (readonly, nonatomic) UIButton *modifyAvatarButton;
@property (readonly, nonatomic) UIView *inputRegion;
@property (readonly, nonatomic) UITextField *inputField;
@property (readonly, nonatomic) UIButton *clearInputButton;
@property (readonly, nonatomic) UILabel *syncLabel;
@property (readonly, nonatomic) UIImageView *syncIconView;
@property (nonatomic) double viewHeight;
@property (nonatomic) double keyboardHeight;
@property (nonatomic) BOOL isRequesting;
@property (weak, nonatomic) id<IESIMCustomModalTransitionContext> transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEIMGroupChatPanelControllerDelegate> groupChatPanelDelegate;
@property (copy, nonatomic) NSDictionary *groupChatTrackDict;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)viewControllerWillDismissByAction:(long long)a0;
- (void)keyboardChangedWithTransition:(struct { BOOL x0; BOOL x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; double x4; long long x5; unsigned long long x6; })a0;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)__createDependency;
- (void)__createAvatarRegion;
- (void)showGroupChatPanelOnViewController:(id)a0;
- (void)__setupBinder;
- (void)__createTopRegion;
- (void)__createInputRegion;
- (void)__createSyncRegion;
- (void)handleCloseButtonClicked:(id)a0;
- (void)handleConfirmButtonClicked:(id)a0;
- (void)handleModifyAvatarButtonClicked:(id)a0;
- (void)__inputTextDidChange:(id)a0;
- (void)__clearInputTextbuttonClicked:(id)a0;
- (void)__avatarBinder;
- (void)__inputRegionBinder;
- (void)__triggerCompletionAction;
- (long long)__maxInputTextLength;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (double)customCornerRadius;

@end
