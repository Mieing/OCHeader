@class NSString, IESLiveInteractionEmojiPanelView, IESLiveInteractionEmojiStore, IESLiveInteractionEmojiAdapter;

@interface IESLiveInteractionEmojiFragment : IESLiveRoomComponent <IESLiveInteractionEmojiRouter>

@property (retain, nonatomic) IESLiveInteractionEmojiStore *store;
@property (retain, nonatomic) IESLiveInteractionEmojiAdapter *adapter;
@property (weak, nonatomic) IESLiveInteractionEmojiPanelView *panelView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)a0;
- (id)onlineUserWrapper:(id)a0;
- (BOOL)shouldFilterForMessageList:(id)a0;
- (void)muteSound:(BOOL)a0;
- (id)emojiContainerForUserID:(id)a0;
- (void)showPanelWithConfig:(id)a0 requestPage:(id)a1;
- (void)fetchEmojiList:(BOOL)a0 emojiCategory:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)sendEmojiWithID:(id)a0 type:(int)a1 toUserID:(id)a2 requestPage:(id)a3 completion:(id /* block */)a4;
- (void)cancelEmojiAnimationIfNeedWithUser:(id)a0;
- (void)sendEmojiWithID:(id)a0 type:(int)a1 toUserID:(id)a2 action:(id)a3 requestPage:(id)a4 completion:(id /* block */)a5;
- (void)hideEmojiPanel;
- (void)onSelfConnected:(BOOL)a0;
- (void)onGuestScrollBarDidScroll;
- (BOOL)enableShowOthersPanel;
- (void)cancelCurrentInteractGiftAnimation:(id)a0;
- (BOOL)sendInteractEmojiGiftWithEmojiAnimation:(id)a0;
- (id)currentPlayingAnimation;
- (id)dynamicProvider;
- (void)showAudienceSettingPanel;
- (void).cxx_destruct;

@end
