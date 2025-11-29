@class NSString, NSDictionary, NSArray;

@interface AWEIMEmoticonPanelDataManager : NSObject <AWEUserMessage>

@property (copy, nonatomic) NSString *currentLoginUser;
@property (retain, nonatomic) NSDictionary *dynamicEmotions;
@property (copy, nonatomic) NSString *lastUsedThemeInfoUniqueId;
@property (readonly, nonatomic) NSArray *localEmotionInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)addCommentRecentlyUsedEmoticonsDataWithModel:(id)a0 theme:(long long)a1 scene:(long long)a2;
- (void)updateRecentUsedEmoticon:(id)a0;
- (BOOL)isLargerThanMaxCountWithArtID:(id)a0;
- (id)recentIMMessageUserStickersWithType:(long long)a0 scene:(long long)a1;
- (void)updateIMMessageRecentUsedEmoticon:(id)a0 withType:(long long)a1 sessionType:(long long)a2 scene:(long long)a3;
- (void)stickerDownloaded:(id)a0;
- (void)storeEmojiPackagesChanged;
- (id)recentUserStickers;
- (void)resetRecentUserStickers:(id)a0;
- (void)resetRecentlyEmoticons:(id)a0 WithType:(long long)a1;
- (void)p_cacheLastUsedEmoticonUniqueID:(id)a0;
- (void)loadLastUsedThemeInfoUniqueId;
- (BOOL)isLargerThanMaxCountWithAIThemeModel:(id)a0;
- (void)updateLastUsedTabWithThemeInfoUniqueId:(id)a0;
- (void)loadLastUsedThemeInfoUniqueIdIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
