@class NSString, NSMutableDictionary, NSMutableArray;

@interface IESLLGDAlbumDataProcessor : NSObject

@property (retain, nonatomic) NSMutableDictionary *tabIDs;
@property (retain, nonatomic) NSMutableDictionary *tabNextPageIndexes;
@property (retain, nonatomic) NSString *poiID;
@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *backendType;
@property (retain, nonatomic) NSMutableDictionary *categoryInfos;
@property (retain, nonatomic) NSMutableArray *tabInfos;
@property (copy, nonatomic) NSString *previewHeaderLynxURL;
@property (copy, nonatomic) NSString *previewBottomLynxURL;
@property (copy, nonatomic) NSString *bottomBarLynxURL;
@property (copy, nonatomic) NSString *headerBarLynxURL;
@property (copy, nonatomic) NSString *bottomBarRawData;
@property (copy, nonatomic) NSString *headerBarRawData;

- (void)loadMore:(long long)a0 completion:(id /* block */)a1;
- (id)initWithProductID:(id)a0 poiID:(id)a1 backendType:(id)a2;
- (void)fetchDataWithTabIndex:(long long)a0 photoIndexOffset:(long long)a1 completion:(id /* block */)a2;
- (BOOL)albumHasBeenCache:(long long)a0;
- (void)updatePOIID:(id)a0;
- (void)loadDataWithTabIndex:(long long)a0 completion:(id /* block */)a1;
- (long long)tabNumbers;
- (id)getPhotoWith:(id)a0 photoIndex:(long long)a1;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)init;
- (void)loadDataWithCompletion:(id /* block */)a0;

@end
