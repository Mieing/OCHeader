@class NSString;

@interface AWEIMGreetingContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface, AWELocoalGifMessageDismissable, AWEIMRecentNewsProtocol>

@property (nonatomic) BOOL didCheckSender;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)closeButtonClicked;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)reloadUI;
- (void)__trackShowData;
- (void)dismissGreetingGifMessage:(id)a0;
- (id)baseVC;
- (void)sendSelectEmojiWithGreetingEmoticon:(id)a0 andShowedIndex:(long long)a1;
- (id)p_showIdsWithShowedIndex:(long long)a0;
- (void)willDisplayEmojiWithGreetingEmoticon:(id)a0 showedIndex:(long long)a1 props:(id)a2;
- (double)p_stickerWidth;
- (void)setupUIStyle;
- (void)hiddenRecentNewsMessage:(id)a0;
- (id)__greetEmojiTrackerParams;
- (id)__emojiTypeFrom:(id)a0;
- (id)displayMessage;
- (void)dealloc;
- (void)deleteMessage;
- (void)addObservers;

@end
