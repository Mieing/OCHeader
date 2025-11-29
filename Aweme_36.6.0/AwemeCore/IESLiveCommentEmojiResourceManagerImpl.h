@class NSArray, IESLivePersonalizedEmoticonsManager, NSString, NSMutableDictionary, NSMutableArray;
@protocol IESLiveLocationService;

@interface IESLiveCommentEmojiResourceManagerImpl : NSObject <IESLiveCommentEmojiResourceManager>

@property (retain, nonatomic) NSMutableArray *textRelatedEmoticonItems;
@property (retain, nonatomic) NSArray *personalizedShortcutEmoticons;
@property (retain, nonatomic) IESLivePersonalizedEmoticonsManager *personalizedEmoticonManager;
@property (retain, nonatomic) NSArray *activityEmojiGroupsArray;
@property (nonatomic) BOOL enableFusionEmoji;
@property (copy, nonatomic) NSString *userFusionKey;
@property (retain, nonatomic) NSMutableArray *usedFusionEmoticonModels;
@property (retain, nonatomic) NSMutableDictionary *fusionEmojiMap;
@property (retain, nonatomic) NSArray *lowPcuGuideChatEmojiArray;
@property (retain, nonatomic) NSMutableDictionary *lowPcuGuideChatEmojiMap;
@property (nonatomic) BOOL quickEmojiViewNeedShowLowPcuEmojis;
@property (retain, nonatomic) id<IESLiveLocationService> locationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (id)mainEmoticonResource;
- (id)recommendShortcutEmojiGroup;
- (id)personalizedRecommendShortcutEmoticons;
- (id)activityEmoticonModel;
- (BOOL)getQuickEmojiViewShowLowPcuEmojisStatus;
- (id)lowPcuGuideChatEmoticonModel;
- (void)emojiDidClicked:(id)a0 trackParams:(id)a1;
- (void)emojiShowed:(id)a0 trackParams:(id)a1;
- (void)recommendEmojiDidShowed:(id)a0;
- (id)imageWithEmoticonParseText:(id)a0;
- (id)usedFusionEmoticonItems;
- (void)updateFusionEmoticonItemsWithFusionEmoji:(id)a0;
- (id)getFusionEmojiWithID:(id)a0;
- (id)getLowPcuGuideChatEmojiWithID:(id)a0;
- (id)getEmoticonsModelIfContainsEmojiId:(id)a0;
- (BOOL)personalizedEmojiEnabled;
- (void)checkEmojiResourceAvailable;
- (void)loadUsedFusionEmoticonFromLocal;
- (id)getValidActivityEmoticonArray;
- (void)updateTextRelatedEmoticonItemsWithInfo:(id)a0;
- (void)updateRecommendShortcutEmojiItemsWithInfo:(id)a0;
- (void)updateActivityEmojiWith:(id)a0;
- (void)updateLowPcuGuideChatItemsWith:(id)a0;
- (void)updateQuickEmojiViewNeedShowLowPcuEmojis:(BOOL)a0;
- (void)saveFusionEmoticonItemsToLocal;
- (void)updateFusionEmojiBanList:(id)a0;
- (void).cxx_destruct;

@end
