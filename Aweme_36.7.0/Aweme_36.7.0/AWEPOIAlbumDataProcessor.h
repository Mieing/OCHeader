@class NSMutableDictionary, NSString, AWEPOIAlbumSelectedStatus, NSMutableArray, AWEPOIAlbumVideoPageModel;

@interface AWEPOIAlbumDataProcessor : NSObject

@property (retain, nonatomic) NSMutableDictionary *tabIDs;
@property (retain, nonatomic) NSMutableDictionary *categoryInfos;
@property (retain, nonatomic) NSMutableArray *tabInfos;
@property (retain, nonatomic) AWEPOIAlbumSelectedStatus *selectedStatus;
@property (nonatomic) long long maxReportNumber;
@property (copy, nonatomic) NSString *photosReportSchema;
@property (copy, nonatomic) NSString *galleryHeaderLynxURL;
@property (copy, nonatomic) NSString *galleryBottomLynxURL;
@property (copy, nonatomic) NSString *bottomBarLynxURL;
@property (copy, nonatomic) NSString *bottomBarRawData;
@property (nonatomic) BOOL hideAlbumUploadButton;
@property (nonatomic) BOOL hasVideoItem;
@property (retain, nonatomic) AWEPOIAlbumVideoPageModel *videoInfo;

- (void)loadMore:(long long)a0 completion:(id /* block */)a1;
- (BOOL)albumHasBeenCache:(long long)a0;
- (long long)tabNumbers;
- (id)getPhotoWith:(id)a0 photoIndex:(long long)a1;
- (void)fetchDataWithPOIID:(id)a0 backendType:(id)a1 tabIndex:(long long)a2 photoIndexOffset:(long long)a3 completion:(id /* block */)a4;
- (void)fetchVideoDataWithPOIID:(id)a0 backendType:(id)a1 pageIndex:(long long)a2 topItemID:(id)a3 completion:(id /* block */)a4;
- (void)loadDataWithPOIID:(id)a0 backendType:(id)a1 completion:(id /* block */)a2;
- (void)loadDataWithPOIID:(id)a0 backendType:(id)a1 tabIndex:(long long)a2 completion:(id /* block */)a3;
- (void)loadVideoDataWithPOIID:(id)a0 backendType:(id)a1 topItemID:(id)a2 completion:(id /* block */)a3;
- (void)loadMoreVideoDataWithCompletion:(id /* block */)a0;
- (void)loadBottomAndHeadWithPOIID:(id)a0 backendType:(id)a1 scene:(unsigned long long)a2 coType:(unsigned long long)a3 saleChannel:(id)a4 completion:(id /* block */)a5;
- (long long)getTabIndex:(id)a0;
- (BOOL)deleteSelectedStatus:(id)a0 photoIndex:(long long)a1;
- (void).cxx_destruct;
- (void)cleanCache;
- (id)init;

@end
