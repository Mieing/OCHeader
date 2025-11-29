@class NSString, NSMutableDictionary;

@interface AWEIMExchangeCameraUtility : NSObject <IESIMExchangeCameraUtilityInterface>

@property (retain, nonatomic) NSMutableDictionary *quoteTimeDiffDic;
@property (retain, nonatomic) NSMutableDictionary *messagesDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getTitleAttributedStringWithMessage:(id)a0 needExchangeAnimation:(BOOL)a1 isExchangeImageFinish:(BOOL)a2;
+ (BOOL)isSupportExchangeImageCameraAlbum;
+ (BOOL)isSupportExchangeImageAlbumRandom;
+ (void)storeExchangeFinishLocalMarkWithServerMsgId:(long long)a0;
+ (id)memoryCacheForNewGlobalIndexWithCon:(id)a0;
+ (id)diskCacheForNewGlobalIndexWithCon:(id)a0;
+ (void)writeMemoryCacheForNewGlobalIndex:(id)a0 withCon:(id)a1;
+ (id)memoryCacheForNewOtherGlobalIndexWithCon:(id)a0;
+ (id)diskCacheForNewOtherGlobalIndexWithCon:(id)a0;
+ (void)writeMemoryCacheForNewOtherGlobalIndex:(id)a0 withCon:(id)a1;
+ (void)routerToExchangeImageCamaraWithMessage:(id)a0 conversationId:(id)a1 enterFrom:(id)a2 entrance:(id)a3 extraInfo:(id)a4;
+ (void)writeMemoryCacheForIMMessage:(id)a0 withConID:(id)a1;
+ (id)memoryCacheForIMMessageWithConID:(id)a0;
+ (long long)newGlobalIndexWithCon:(id)a0;
+ (long long)newOtherGlobalIndexWithCon:(id)a0;
+ (void)setNewGlobalIndex:(long long)a0 withCon:(id)a1;
+ (void)setNewOtherGlobalIndex:(long long)a0 withCon:(id)a1;
+ (void)routerToExchangeImageCamaraWithConversationId:(id)a0 enterFrom:(id)a1 entrance:(id)a2;
+ (id)getGaussianBlurImageWithImage:(id)a0 blurRadius:(double)a1;
+ (BOOL)isSupportExchangeImageAnimation;
+ (id)getUnlockWithoutExchangeUidsInGroups:(id)a0;
+ (long long)getExchangeIndexWith:(id)a0;
+ (long long)getOtherExchangeIndexWith:(id)a0;
+ (void)updateConversationExchangeIndexWith:(id)a0 message:(id)a1 completion:(id /* block */)a2;
+ (void)updateConversationExchangeOtherIndexWith:(id)a0 message:(id)a1 completion:(id /* block */)a2;
+ (void)requestExchangedMessageListWithMessage:(id)a0 completion:(id /* block */)a1;
+ (void)filterExchangeMessageListWithConversationId:(id)a0 messageList:(id)a1 complete:(id /* block */)a2;
+ (id)sharedInstance;

- (id)exchangeName;
- (BOOL)isSupportExchangeCameraWithConversation:(id)a0;
- (unsigned long long)exchangeEntranceStrategy;
- (void)routerToExchangeCameraWithContext:(id)a0;
- (BOOL)isSupportExchangeImageAlbumFullInputQuickSelect:(id)a0;
- (BOOL)isSupportExchangeImageInputCamera;
- (BOOL)isSupportExchangeImageInputCameraWithConversation:(id)a0;
- (BOOL)isSupportExchangeImageAlbumFullPhotoPicker:(id)a0;
- (BOOL)shouldReloadViewModelWithOriginMessage:(id)a0 updateMessage:(id)a1;
- (id)getExchangeMessageWithMessage:(id)a0;
- (BOOL)isExchangeRequestFinishWithOriginMessage:(id)a0 updateMessage:(id)a1;
- (void)trackClickExchangeImageWith:(id)a0 clickFrom:(id)a1;
- (void)routerToRandomAlbumCamaraConversationId:(id)a0 enterFrom:(id)a1 entrance:(id)a2 enterMethod:(id)a3;
- (BOOL)isSupportExchangeImageFeature;
- (void)clearConversationExchangeIndexInfo:(id)a0;
- (BOOL)shouldExitReplyExchangeActionBarEntryForMsg:(id)a0;
- (BOOL)isPeerUserExchangeReverse:(id)a0;
- (BOOL)shouldShowReplyButtonWithExchangeImageMessage:(id)a0 conversation:(id)a1;
- (id)getMosaicImageWithImage:(id)a0 messageID:(id)a1;
- (id)getHintPushDisplayTextWithMessage:(id)a0 displaytype:(long long)a1;
- (BOOL)isSupportExchangeImageChatListCameraWithReplyConversation:(id)a0 completion:(id /* block */)a1;
- (void)setExchangeMsgRecentlySend:(id)a0 uniqueId:(id)a1;
- (id)getExchangeQuoteTimeDiffWithQuoteServerMsgId:(long long)a0;
- (void)setExchangeQuoteServerMsgId:(long long)a0 quoteTimeDiff:(long long)a1;
- (BOOL)isExchangeFinishWithMessage:(id)a0;
- (void).cxx_destruct;

@end
