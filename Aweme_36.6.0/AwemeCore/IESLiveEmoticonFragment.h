@class IESLiveCommentEmojiResourceManagerImpl, NSMutableDictionary, IESLiveCommentExpandEntryItem, NSString, NSMutableArray;

@interface IESLiveEmoticonFragment : IESLiveRoomComponent <IESLiveCommentEmoticonPanelViewDelegate, HTSLiveMessageSubscriber, IESLiveMessageInteractionModuleCommentAction, IESLiveEmoticonInterface>

@property (retain, nonatomic) IESLiveCommentEmojiResourceManagerImpl *commentEmojiResourceManager;
@property (retain, nonatomic) NSMutableArray *allRegisterdEmoticonItems;
@property (retain, nonatomic) IESLiveCommentExpandEntryItem *emojiEntryItem;
@property (nonatomic) BOOL didShowSubscribeEmoticonPage;
@property (retain, nonatomic) NSMutableDictionary *activityEmojiTipModels;
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
- (void)registerEmoticonPageWithItem:(id)a0;
- (id)registerdEmoticonItems;
- (void)openCommentPanelWithActivityEmoji:(id)a0 messageSource:(id)a1 requestSource:(id)a2;
- (BOOL)isLiveAdRoom;
- (void)relatedImageEmojiUpdate:(id)a0;
- (void)recommendShortcutEmojiUpdate:(id)a0;
- (void)fusionEmojiBanListUpdate:(id)a0;
- (void)emoticonPanelView:(id)a0 didSelectPageWithItem:(id)a1;
- (void)openCommentPanelWithFusionEmoji:(id)a0 messageSource:(id)a1 requestSource:(id)a2;
- (id)interfaceImpl;
- (void)emojiEntryDidClicked;
- (id)createEmoticonPanelViewWithConfig:(id)a0;
- (void)emojiEntryDidShowed;
- (void)checkEmojiEntryRetDot;
- (void)loadEmojiPanelItem;
- (void)cleanAndStoreActivityEmojiTipModel;
- (BOOL)whetherToRemindOfNewActivityEmoji;
- (void)trackActivityEmojiGroupShow;
- (void)openCommentPanelWithContent:(id)a0 commentEnterSource:(long long)a1 messageSource:(id)a2 requestSource:(id)a3;
- (void)handleActivityEmojiGroupsMessage:(id)a0;
- (void)handleLowPcuGuideChatMessage:(id)a0;
- (BOOL)blockLowPcuGuideChatEmojis;
- (id)getTipModelWith:(id)a0;
- (void)cleanUpActivityEmojiTipModel;
- (void)keyboardWillHide;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
