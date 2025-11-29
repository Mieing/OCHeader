@class BDUGFlowAuthToken, NSString, AWEIMComponentManager;

@interface AWEIMTextContentComponent : AWEIMFlexComponent <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMTextMessagePluginContainerInterface, AWEIMFoldMessageAssistanceButtonClickAction, AWEIMMessageContentInterface>

@property (nonatomic) BOOL didReplacedToAnimate;
@property (retain, nonatomic) BDUGFlowAuthToken *lastAuthToken;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)addForwardMsgResourceFromComponent;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)viewControllerLifeCycleChanged:(unsigned long long)a0;
- (void)didUpdateContentWithAnimation:(long long)a0;
- (void)p_addKVO;
- (void)p_trackXiaoheIfNeedWithEvent:(id)a0;
- (void)updateAuthToken;
- (id)p_receiverUid;
- (id)imageDisplayAttributedStringForMsg:(id)a0;
- (void)didClickAssistanceButton:(long long)a0;
- (id)p_setupDisplayString;
- (id)contentPlugin;
- (void)p_trackFormatLinkMessageClickIfNeeded;
- (void)p_handleJumpUserProfileActionIfNeeded:(id)a0 tappedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)p_didReplaceAnimateEmojiIfNeed;
- (id)p_modifyAttributedContentForMsg:(id)a0;
- (BOOL)p_needMapAnimateLittleEmoticon;
- (id)modifyContentPlugins;
- (void)p_clearAnimateAttributeIfNeed;
- (BOOL)isSpecialBizAI;
- (BOOL)p_satisfyCountWithMessage:(id)a0;
- (BOOL)p_satisfyUnreadWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)dealloc;

@end
