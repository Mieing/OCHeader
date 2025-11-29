@class NSString, WCFinderInteractionedBriefCollectionInfo;

@interface WCFinderInteractionedListCacheItem : NSObject <PBCoding>

@property (nonatomic) int itemType;
@property (copy, nonatomic) NSString *feedTid;
@property (retain, nonatomic) WCFinderInteractionedBriefCollectionInfo *briefCollectionInfo;
@property (copy, nonatomic) NSString *authorUsername;
@property (nonatomic) unsigned long long favoriteTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_itemType;
+ (void)PBArrayAdd_feedTid;
+ (void)PBArrayAdd_briefCollectionInfo;
+ (void)PBArrayAdd_authorUsername;
+ (void)PBArrayAdd_favoriteTimestamp;
+ (void)initialize;
+ (id)itemWithListDataItem:(id)a0;

- (id)getPBPropertyTable;
- (BOOL)isEqualToItem:(id)a0;
- (void).cxx_destruct;

@end
