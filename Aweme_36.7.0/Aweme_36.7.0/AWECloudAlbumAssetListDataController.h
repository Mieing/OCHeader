@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWECloudAlbumAssetListDataController : NSObject <NSCopying>

@property (copy, nonatomic) NSString *nextCursor;
@property (retain, nonatomic) NSMutableDictionary *videoInfoDictionary;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) NSMutableArray *filteredDataSource;
@property (nonatomic) BOOL refreshHasMore;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic, getter=isUploading) BOOL uploading;
@property (nonatomic) unsigned long long albumId;
@property (copy, nonatomic) NSString *albumName;
@property (readonly, nonatomic) BOOL isFromCamera;
@property (nonatomic, getter=isTaskFailed) BOOL taskFailed;
@property (nonatomic) long long initialIndex;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)filterDuplicatedDatasourceWithArray:(id)a0 isEqual:(id /* block */)a1;
- (id)filterDuplicatedDatasourceWithArray:(id)a0 isEqual:(id /* block */)a1 didGetDuplicatedArray:(id /* block */)a2;
- (void)getVideoInfos:(id)a0 complete:(id /* block */)a1;
- (void)syncVideoInfosFromAssets:(id)a0;
- (id)invalidVideoAssetsInAssets:(id)a0;
- (BOOL)isVideoInfoValid:(id)a0;
- (void)getVideoInfoFromServerWithAsset:(id)a0 completion:(id /* block */)a1;
- (void)getVideoInfoFromLocalWithAsset:(id)a0 phAsset:(id)a1 completion:(id /* block */)a2;
- (id)assetsWithCurrentAsset:(id)a0;
- (id)initWithAlbumId:(unsigned long long)a0 albumName:(id)a1 nextCursor:(id)a2 loadmoreHasMore:(BOOL)a3 dataSource:(id)a4 initialIndex:(long long)a5 uploading:(BOOL)a6 taskFailed:(BOOL)a7;
- (void)getVideoInfoWithAsset:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
