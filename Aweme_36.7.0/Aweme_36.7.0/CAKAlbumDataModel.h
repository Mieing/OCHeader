@class CAKAlbumAssetModelProvider, NSArray, NSString, NSIndexPath, NSObject;
@protocol CAKCategoryContainerProtocol, CAKCollectionModelProtocol;

@interface CAKAlbumDataModel : NSObject <CAKDataContainerProtocol>

@property (retain, nonatomic) CAKAlbumAssetModelProvider *assetModelProvider;
@property (retain, nonatomic) NSObject<CAKCollectionModelProtocol> *albumModel;
@property (retain, nonatomic) NSIndexPath *targetIndexPath;
@property (retain, nonatomic) NSArray *allAlbumModels;
@property (retain, nonatomic) NSObject<CAKCategoryContainerProtocol> *videoSourceAssetsDataModel;
@property (retain, nonatomic) NSObject<CAKCategoryContainerProtocol> *photoSourceAssetsDataModel;
@property (retain, nonatomic) NSObject<CAKCategoryContainerProtocol> *mixedSourceAssetsDataModel;
@property (retain, nonatomic) NSObject<CAKCategoryContainerProtocol> *livePhotoSourceAssetsDataModel;
@property (retain, nonatomic) NSObject<CAKCategoryContainerProtocol> *searchAssetsDataModel;
@property (retain, nonatomic) NSObject<CAKCategoryContainerProtocol> *recommendAssetsDataModel;
@property (retain, nonatomic) NSObject<CAKCategoryContainerProtocol> *suggestionSearchAssetsDataModel;
@property (retain, nonatomic) NSObject<CAKCategoryContainerProtocol> *AIAssetsDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCategoryDataModelWithType:(unsigned long long)a0;
- (void)subscribeDataUpdateNotification:(id /* block */)a0;
- (void)fetchAllCategoryDataIfNeeded;
- (void)fetchCategoryDataWith:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)updateCategoryData:(id)a0 completion:(id /* block */)a1;
- (void)setupAssetModelProvider;
- (void)updateCategoryDataWithAlbumModelAt:(long long)a0;
- (void)subscribeCategoryDataCompletionNotification:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)imageCount;
- (id)init;
- (long long)assetCount;
- (long long)videoCount;

@end
