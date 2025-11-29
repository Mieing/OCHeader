@class AWEIMEmoticonThemeModel, AWEIMCustomStickerCache, NSString;

@interface AWEIMCustomStickerResourceManager : HTSService <IESIMUserServiceMessage, IESIMCustomStickerInterface>

@property (retain, nonatomic) AWEIMCustomStickerCache *stickerCache;
@property (readonly, nonatomic) AWEIMEmoticonThemeModel *themeModel;
@property (readonly, nonatomic) BOOL isListFetchComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customCacheContextStorageKey;
+ (id)updateVersionStorageKey;
+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (id)isExistSticker:(id)a0 animateUri:(id)a1 staticUri:(id)a2;
- (id)isExistStickerModelWithIdentifier:(id)a0 animateUri:(id)a1 staticUri:(id)a2;
- (void)getResource;
- (void)handleResponseModel:(id)a0;
- (void)deleteCustomStickerResource:(id)a0 withCompletion:(id /* block */)a1;
- (void)deleteLocalCustomStickerResource:(id)a0 postNotification:(BOOL)a1;
- (void)deleteLocalCustomStickerResource:(id)a0 updateDisk:(BOOL)a1 postNotification:(BOOL)a2;
- (void)peakCustomStickerResource:(id)a0 withHud:(BOOL)a1 completion:(id /* block */)a2;
- (void)addBatchLocalCustomStickerResource:(id)a0;
- (void)addLocalCustomStickerResource:(id)a0;
- (BOOL)hasStickerCache;
- (void)addSingleSticker:(id)a0 stickType:(unsigned long long)a1 stickerUri:(id)a2 stickerUrl:(id)a3 resourceID:(id)a4 emojiSource:(id)a5 trackInfos:(id)a6 withCompletion:(id /* block */)a7;
- (id)getAllStickers;
- (void)loadCustomListDiskCache;
- (void)fetchNextPageDataIfNeeded;
- (BOOL)isStickersHasReachedLimit;
- (long long)realTotalCount;
- (BOOL)shouldBlockGroupCustomEmoji;
- (id)getCustomListUpdateVersion;
- (void)initFetchRemoteListWithContext:(id)a0;
- (void)fetchNextPageDataWithContext:(id)a0;
- (void)fetchNextPageDataWithContext:(id)a0 completion:(id /* block */)a1;
- (long long)customEmojiFetchPageSize;
- (long long)serverTotalCount;
- (id)stickerCache_emoticonModelFromStickerModel:(id)a0;
- (long long)customEmojiMaxCapacity;
- (void)peakLocalCustomStickerResource:(id)a0;
- (void).cxx_destruct;
- (void)clearData;
- (void)dealloc;

@end
