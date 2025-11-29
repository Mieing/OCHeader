@class NSString, NSMutableDictionary, YYMemoryCache, AWEIMLightInteractionDataProvider;

@interface AWEIMLightInteractionController : NSObject <AWEIMLightInteractionCheckProtocol, AWEIMLightInteractionDataProtocol, AWEIMLightInteractionDemoteProtocol, AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMLightInteractionDataProvider *dataProvider;
@property (retain, nonatomic) NSMutableDictionary *entryModelDict;
@property (retain, nonatomic) NSMutableDictionary *entryCacheTimeDict;
@property (retain, nonatomic) YYMemoryCache *didClickLICache;
@property (retain, nonatomic) NSMutableDictionary *lastSendTimeStampDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_generateTextMessageWithConfig:(id)a0 context:(id)a1;
+ (id)p_generateGiphyMessageWithConfig:(id)a0 context:(id)a1;
+ (id)p_generateBizLightInteractionMessageWithConfig:(id)a0 context:(id)a1;
+ (void)trackLIMessage:(id)a0 name:(id)a1 context:(id)a2;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (BOOL)commonCheckEnableLightInteractionWithPeerSecUid:(id)a0;
- (id)allConfigs;
- (id)buttonIconURLForSource:(id)a0;
- (BOOL)shouldShowSendButtonForSource:(id)a0 peerSecUid:(id)a1;
- (id)buttonTitleForSource:(id)a0;
- (id)configNameForSource:(id)a0;
- (void)sendLightInteractionMessageWithContext:(id)a0 completion:(id /* block */)a1;
- (id)pushIconURLForSource:(id)a0;
- (id)buttonBgColorForSource:(id)a0;
- (id)configWithName:(id)a0;
- (id)lightInteractionEntryForSource:(id)a0;
- (id)replyButtonTitleWithMessage:(id)a0;
- (BOOL)isRouterSchemaModeWithMessage:(id)a0;
- (id)replySchemaWithMessage:(id)a0;
- (void)replyInteractionMessage:(id)a0 context:(id)a1;
- (id)replyToastTextWithMessage:(id)a0;
- (id)configWithSource:(id)a0;
- (BOOL)shouldShowInnerPushReplyButtonForMessage:(id)a0;
- (void)setLightInteractionDidClickWithSource:(id)a0 itemID:(id)a1 userID:(id)a2;
- (BOOL)getLightInteractionDidClickWithSource:(id)a0 itemID:(id)a1 userID:(id)a2;
- (BOOL)canSendInteractionMessageByName:(id)a0 toConversation:(id)a1 peerUser:(id)a2;
- (id)generateLightInteractionMessageWithContext:(id)a0;
- (BOOL)shouldShowActionBarReplyButtonForMessage:(id)a0;
- (id)resolveLIEntriesForSource:(id)a0;
- (BOOL)isValidEntryModel:(id)a0;
- (id)animationIconUrlForSource:(id)a0;
- (BOOL)basicCheckShouldShowReplyButtonForMessage:(id)a0;
- (id)p_keyForSource:(id)a0;
- (id)p_clickKeyForSource:(id)a0 itemID:(id)a1 userID:(id)a2;
- (void)cleanupDidClickCache;
- (id)p_configFromContext:(id)a0;
- (BOOL)p_canSendLIMessageByFrequencyWithContext:(id)a0;
- (void)p_markSendLIMessageWithContext:(id)a0;
- (id)p_keyForConversationID:(id)a0 notificationID:(id)a1 name:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
