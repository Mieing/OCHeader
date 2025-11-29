@class NSString, AWEAwemeModel, UIView, AWEFeedDetailBarActionContainerView, AWECommentListInputViewBarContext;
@protocol AFDVideoPrivacyButtonControllerProtocol, AWECommentInputViewContextProtocol, AWECommentInputViewManagerProtocol, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionPanelDelegate;

@interface AWECommentListInputViewBarController : NSObject <AWEFeedDetailBarActionContainerViewDelegate, AWECommentInputViewManagerDelegate, AWEAwemeDetailBottomBarController>

@property (retain, nonatomic) UIView *containerView;
@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly, nonatomic) id<AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionUpdateDelegate> interactionController;
@property (readonly, nonatomic) id<AWEAwemePlayInteractionPanelDelegate> interactionPanelController;
@property (retain, nonatomic) AWECommentListInputViewBarContext *context;
@property (retain, nonatomic) UIView *quickCommentContainerView;
@property (retain, nonatomic) id<AFDVideoPrivacyButtonControllerProtocol> privacyCtrl;
@property (retain, nonatomic) id<AWECommentInputViewManagerProtocol> commentInputViewManager;
@property (retain, nonatomic) id<AWECommentInputViewContextProtocol> commentContext;
@property (retain, nonatomic) AWEFeedDetailBarActionContainerView *videoActionView;
@property (nonatomic) BOOL hasVideoAction;
@property (nonatomic) BOOL hasPadSplitRemoveInputView;
@property (nonatomic) long long currentLayoutType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWECommentFastEmojiBarDOUYINHTSAdapterProtocolClass;
+ (Class)aAFDServiceDOUYINDSAdapterClass;
+ (Class)aAWEPlayInteractionAdapterClass;

- (void)updateBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (id)referString;
- (BOOL)custom_commentInputViewShouldBeginEditing:(id)a0;
- (id)enterFrom;
- (BOOL)canShowBottomBarForAweme:(id)a0;
- (void)bottomBarAddedToContainer:(id)a0;
- (void)didUpdateLayoutType:(long long)a0;
- (void)updateLogExtraDict:(id)a0;
- (void)preProcessBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (BOOL)updateWhenRotateDisable;
- (void)willShowInputViewAdditional;
- (double)rightOuterContentWidthInDetailBar;
- (BOOL)hasVideoActionViewInDetailBar;
- (id)aAWECommentFastEmojiBarDOUYINHTSAdapterProtocol;
- (id)aAFDServiceDOUYINDSAdapter;
- (id)aAWEPlayInteractionAdapter;
- (void)addNotificationRegister;
- (void)willChangeVideo;
- (void)updateCurrentBottomBarWithAweme:(id)a0 updateTiming:(long long)a1;
- (void)addInteractionControllerContextObserver;
- (void)updateAwemeUpdateViewFrameIfNeed;
- (id)interactionPadSplitController;
- (id)p_inputViewBarConfiguration;
- (BOOL)hideSendButtonWhenHasContent;
- (void)inputViewWillShowKeyboard;
- (void)willHideAdditionalAnimation;
- (void)inputViewWillHideKeyboard;
- (void)inputViewDidHiddenKeyBoard;
- (void)commentInputViewShrinkButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (Class)contextClass;
- (id)bottomBarView;

@end
