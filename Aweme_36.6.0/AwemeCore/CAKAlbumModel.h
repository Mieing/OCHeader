@class NSString, NSArray, PHFetchResult, AWEAlbumModel, NSDate, PHAssetCollection, CAKAlbumAssetCacheKey;

@interface CAKAlbumModel : NSObject <CAKCollectionModelProtocol>

@property (retain, nonatomic) AWEAlbumModel *originalStudioAlbumModel;
@property (retain, nonatomic) NSArray *models;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) PHFetchResult *result;
@property (retain, nonatomic) PHFetchResult *originalResult;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (retain, nonatomic) CAKAlbumAssetCacheKey *resultKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertToStudioArray:(id)a0;
+ (id)createWithStudioArray:(id)a0;
+ (id)createWithStudioAlbum:(id)a0;

- (void)updateOriginalResult:(id)a0;
- (id)convertToStudioAlbum;
- (void)getCoverImageWithCompletion:(id /* block */)a0;
- (void)updateResult:(id)a0;
- (id)collectionName;
- (void).cxx_destruct;
- (id)localIdentifier;
- (long long)count;
- (BOOL)isCameraRoll;

@end
