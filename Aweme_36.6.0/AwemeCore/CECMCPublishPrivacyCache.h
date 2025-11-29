@protocol ACCRepoAuthorityData;

@interface CECMCPublishPrivacyCache : NSObject

@property (retain, nonatomic) id<ACCRepoAuthorityData> model;

+ (long long)partOfVisibleStatus;
+ (id)key_CECPartOfVisibleStatus;
+ (id)key_defaultVisibleType;
+ (void)update_partOfVisibleStatus:(long long)a0;
+ (void)update_defaultVisibleType:(long long)a0;
+ (long long)defaultVisibleType;
+ (id)sharedInstance;

- (BOOL)isCloseFriendsType;
- (void)initCacheModel;
- (void).cxx_destruct;
- (id)init;
- (id)cacheModel;

@end
