@class NSString, NSMutableArray;

@interface FavRecentDataMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *arrRecentFavDatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)saveRecentFavDatas;
- (void)updateFavoritesItemByLocalId:(unsigned int)a0;
- (void)removeFavoritesItemByLocalId:(unsigned int)a0;
- (id)getRecentFavoritesItem;
- (void).cxx_destruct;

@end
