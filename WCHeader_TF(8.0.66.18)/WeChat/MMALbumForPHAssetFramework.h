@class MMAlbumFetchResult, NSMutableDictionary, NSArray, NSDictionary, PHAssetCollection;

@interface MMALbumForPHAssetFramework : MMAlbumForiOS8Plus

@property (retain, nonatomic) PHAssetCollection *m_collection;
@property (retain, nonatomic) MMAlbumFetchResult *m_fetchResult;
@property (retain, nonatomic) NSMutableDictionary *m_assetDic;
@property (retain, nonatomic) NSArray *m_imagesArray;
@property (retain, nonatomic) NSDictionary *m_indexInAllToIndexInImages;
@property (nonatomic) BOOL m_shouldIncludeVideo;
@property (nonatomic) BOOL m_isOnlyShowVideo;
@property (nonatomic) BOOL isOnlyShowAssetWithLocation;
@property (nonatomic) long long m_livePhotoMode;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithPHAssetCollection:(id)a0 options:(id)a1;
- (id)getFetchResult;
- (void)updateFetchResult:(id)a0;
- (id)albumId;
- (id)name;
- (unsigned long long)photosCount;
- (id)coverImage;
- (id)assetOfIndex:(unsigned long long)a0;
- (id)assetForPHAssset:(id)a0;
- (void)stopICloudActivity;
- (void)retriveCoverImageWithAsyncBlock:(id /* block */)a0;
- (void)retrivePhotoCountWithAsyncBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
