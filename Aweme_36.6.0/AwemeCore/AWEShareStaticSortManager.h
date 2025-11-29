@interface AWEShareStaticSortManager : NSObject

+ (Class)aAWEShareServiceDOUYINHTSAdapterClass;
+ (id)sharedManager;

- (id)aAWEShareServiceDOUYINHTSAdapter;
- (void)sortChannels:(id)a0 usingSorting:(id)a1;
- (void)sortChannels:(id)a0 withContext:(id)a1;
- (id)sortingForShareChannelsWithContext:(id)a0;
- (id)sortingForActionChannelsWithContext:(id)a0;
- (id)defaultShareSorting;
- (void)updateSorting:(id)a0 forShareChannelsWithContext:(id)a1;
- (id)serverActionSortingForAweme;
- (id)defaultActionSortingForAweme;
- (id)defaultActionSortingForDetailPage;
- (id)defaultActionSortingForGoodsShare;
- (id)defaultActionSortingForLive;
- (id)defaultActionSortingForNonAweme;
- (void)updateSorting:(id)a0 forActionChannelsWithContext:(id)a1;
- (long long)addWechatFriendsIndex;
- (long long)contactFriendsIndex;
- (void)insertType:(id)a0 sorting:(id)a1 index:(long long)a2;
- (id)recommendActionSortingForAweme;
- (id)defaultModalActionSortingForAwemeGuest;
- (id)defaultModalLongPressActionSortingForAwemeGuest;
- (id)defaultModalActionSortingForAwemeHost;

@end
