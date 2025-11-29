@class WCFinderDataItem, FinderCollectionInfo, WCFinderContact;

@interface WCFinderInteractionedListDataItem : NSObject

@property (nonatomic) int itemType;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) FinderCollectionInfo *collectionInfo;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) unsigned long long favoriteTimestamp;

+ (id)itemWithData:(id)a0;
+ (id)itemWithCacheItem:(id)a0;

- (void).cxx_destruct;

@end
