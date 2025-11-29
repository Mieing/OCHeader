@class FinderCollectionInfo, _TtC6WeChat36FinderFavoriteLinkStyleConfiguration, WCFinderFeedContentVM, WCFinderFavoriteCollectionFlowConfiguration, WCFinderContact;

@interface WCFinderInteractionedListViewItem : NSObject

@property (retain, nonatomic) WCFinderFavoriteCollectionFlowConfiguration *collectionConfiguration;
@property (retain, nonatomic) _TtC6WeChat36FinderFavoriteLinkStyleConfiguration *linkStyleConfiguration;
@property (nonatomic) int itemType;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) FinderCollectionInfo *collectionInfo;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) unsigned long long favoriteTimestamp;

+ (id)itemWithListDataItem:(id)a0 scene:(int)a1 dataScene:(id)a2;
+ (id)itemWithCacheItem:(id)a0 scene:(int)a1 dataScene:(id)a2;

- (BOOL)isEqualToItem:(id)a0;
- (void).cxx_destruct;

@end
