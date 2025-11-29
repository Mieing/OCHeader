@class NSString, NSMutableArray, NSArray;

@interface AWECloudAlbumDataManager : NSObject <AWECloudAlbumDataManagerProtocol>

@property (nonatomic) BOOL hasMoreRemoteData;
@property (nonatomic) BOOL isFetchingData;
@property (copy, nonatomic) NSString *nextCursor;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSArray *selectedAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initItemData;
- (id)EcParams;
- (BOOL)handleAlbumListData:(id)a0;
- (void)trackCreateAlbumStatus:(BOOL)a0;
- (id)getItemAtIndex:(id)a0;
- (void)fetchRemoteAlbumList:(id /* block */)a0;
- (void)createNewAlbum:(id)a0 complete:(id /* block */)a1;
- (void)getNewAlbumThumbnail:(id /* block */)a0;
- (void)trackAlbumSelected:(id)a0;
- (id)transferAWEAssetModelToPHAsset:(id)a0;
- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAssets:(id)a0;
- (long long)countOfItems;

@end
