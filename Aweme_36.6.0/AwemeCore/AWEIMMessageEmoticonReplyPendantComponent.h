@class NSString;
@protocol IESIMGroupSpeakPermissionGroupOwnerQuickEmojoInterface, AWEIMMessageEmojiAnimatorInterface;

@interface AWEIMMessageEmoticonReplyPendantComponent : AWEIMFlexComponent <AWEIMMessageEmoticonReplyInterface, AWEIMUserMessageTemplateAction>

@property (retain, nonatomic) id<AWEIMMessageEmojiAnimatorInterface> animator;
@property (weak, nonatomic) id<IESIMGroupSpeakPermissionGroupOwnerQuickEmojoInterface> groupOwnerQuickEmojoService;
@property (nonatomic) double lastDiggTime;
@property (nonatomic) BOOL hasBeenDigged;
@property (nonatomic) long long lastDiggAnimationIndex;
@property (nonatomic) BOOL isFirstShowEmojiPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)multiEmojiReplyWithKey:(id)a0 enterMethod:(id)a1;
- (void)emojiReplyedWithMenuButton;
- (void)emojiReplyedWithMenuButton:(id)a0;
- (void)p_updateProps:(id)a0;
- (void)p_updatePresenter:(id)a0;
- (void)p_trackAddMoreEmojiWithAction:(id)a0;
- (BOOL)p_checkIsGroupBlockedOrCurrentUserBlocked;
- (void)p_playOptimizedAnimation;
- (void)removeEmojiFromMessage:(id)a0;
- (id)p_loveHeartBtn;
- (void)messageCellDidDoubleTapped:(id)a0;
- (void)p_reloadCell;
- (void)addEmojiToMessage:(id)a0 context:(id)a1;
- (void)p_playEmojiAnimation;
- (void)p_activeChangePresenter:(id)a0;
- (struct CGPoint { double x0; double x1; })p_getIMCustomMenuViewTapLocationInScreenAtLocation:(struct CGPoint { double x0; double x1; })a0 locationInView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })p_getIMCustomMenuViewCellBubbleFrameInScreen:(id)a0;
- (void)p_clickUserWithUid:(id)a0;
- (void)p_showEmoticonReplyListComponentWithGroupKey:(id)a0;
- (void).cxx_destruct;

@end
