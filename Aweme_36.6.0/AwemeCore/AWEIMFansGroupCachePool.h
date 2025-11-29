@class NSCache;

@interface AWEIMFansGroupCachePool : NSObject

@property (retain, nonatomic) NSCache *fansGroupCache;
@property (retain, nonatomic) NSCache *ownerSameCreatorCache;
@property (retain, nonatomic) NSCache *normalCache;

+ (BOOL)isOwnerSameCreatorWithConversationId:(id)a0;
+ (BOOL)isFansGroupWithAWEIMConversation:(id)a0;
+ (BOOL)isOwnerSameCreatorWithAWEIMConversation:(id)a0;
+ (BOOL)isCreatorFansGroupWithIESIMConversation:(id)a0;
+ (BOOL)isLiveFansGroupWithIESIMConversation:(id)a0;
+ (BOOL)isFansGroupWithIESIMConversation:(id)a0;
+ (long long)__checkCacheForConversationId:(id)a0;
+ (BOOL)__checkConversationIsGroupTypeWithIESIMConversation:(id)a0 cache:(BOOL)a1;
+ (long long)__getConversationInfoFromDiskWithIESIMConversation:(id)a0 cache:(BOOL)a1;
+ (BOOL)isOwnerSameCreatorWithIESIMConversation:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
