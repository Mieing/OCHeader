@class NSString;

@interface TingApiListSourceCpp : UnitRCObjcBaseProxyClass <TingApiListSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithTingItems:(id)a0;
+ (id)createWithListenIdList:(id)a0;
+ (id)createWithCategory:(id)a0 itemList:(id)a1 mergeWithBaseListenId:(BOOL)a2;
+ (id)createWithCategory:(id)a0 itemList:(id)a1;
+ (id)createWithCategory:(id)a0;
+ (id)createWithCategory:(id)a0 itemList:(id)a1 mergeWithBaseListenId:(BOOL)a2 sessionBuffer:(id)a3;
+ (id)createWithTapeInfoAndTingListSource:(id)a0 context:(id)a1;

- (void)refresh;
- (void)loadMore;
- (void)loadMore:(int)a0;
- (BOOL)hasMore;
- (BOOL)hasMore:(int)a0;
- (void)setHasMore:(BOOL)a0;
- (void)setHasMore:(BOOL)a0 direction:(int)a1;
- (int)count;
- (void)setScene:(int)a0;
- (int)getScene;
- (id)getItemInfo:(int)a0;
- (id)getItems;
- (void)checkRefresh:(id)a0;
- (id)generateTapeItem;
- (void)addListSourceListener:(id)a0;
- (void)removeListSourceListener:(id)a0;

@end
