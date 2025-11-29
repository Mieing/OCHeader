@class NSString, FavoritesItem;

@interface FTSFavSearchResultItem : NSObject <WeChat.FTSRowModel>

@property (nonatomic, readonly) NSString *userName;
@property (nonatomic) unsigned int localId;
@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) FavoritesItem *favItem;

- (id)diffIdentifier;
- (void).cxx_destruct;

@end
