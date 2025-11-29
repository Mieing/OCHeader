@class NSDictionary, AWEIMGroupAvatarMergeHelper, NSArray;

@interface AWEIMMessageTabRecommendGroupCache : NSObject

@property (retain, nonatomic) AWEIMGroupAvatarMergeHelper *avatarMerger;
@property (readonly, nonatomic) double requestTimestamp;
@property (readonly, nonatomic) long long requestVersion;
@property (readonly, nonatomic) double requestIntervalSetting;
@property (readonly, nonatomic) long long requestVersionSetting;
@property (copy) NSDictionary *chatModelMapper;
@property (copy) NSArray *chatModels;
@property (copy) NSArray *recommendGroupItems;

+ (id)storageKey;
+ (id)tryGetChatHintFromItem:(id)a0;
+ (id)cacheFromStorage;

- (id)storageKey;
- (void)updateRecommendItems:(id)a0;
- (id)initWithRecommendGroupItems:(id)a0;
- (id)convertRecommendGroupItemToChatModel:(id)a0;
- (id)baseChatModelFromRecommendGroupItem:(id)a0;
- (id)recommendDynamicIconForKey:(id)a0;
- (id)recommendLightIconKey:(id)a0;
- (id)recommendDarkIconKey:(id)a0;
- (id)checkAndGenerateGroupAvatar;
- (id)chatModelWithIdentifier:(id)a0;
- (id)saveToStorage;
- (id)initWithStorageDictionary:(id)a0;
- (id)groupDefaultAvatarGeneratedWithFirstUid:(id)a0 secondUid:(id)a1 mergeType:(long long)a2;
- (BOOL)needRequestRemoteData;
- (id)updateRecommendItemStatus:(long long)a0 withIdentifier:(id)a1;
- (void)checkAndRemoveLocalAvatar;
- (void).cxx_destruct;

@end
