@class NSString, NSMutableArray;
@protocol FavSearchHelperDelegate;

@interface FavSearchHelper : MMObject <IFavLocationMgrExt>

@property (nonatomic) unsigned int currentEventID;
@property (retain, nonatomic) NSMutableArray *arrLocItem;
@property (weak, nonatomic) id<FavSearchHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterAndAggregateSearchResult:(id)a0 withSearchText:(id)a1 withSearchType:(long long)a2 withTagList:(id)a3;
+ (id)aggregatePicSearchResult:(id)a0;
+ (id)convertFavDataToSimpleInfo:(id)a0 inItem:(id)a1;

- (id)init;
- (void)getAddressWithLocation:(id)a0;
- (void)getFavItemsAddress:(id)a0;
- (void)getAddressInQueue;
- (void)requestAddressFromLocation:(id)a0;
- (void)onFindFavAddress:(id)a0 eventID:(unsigned int)a1;
- (void).cxx_destruct;

@end
