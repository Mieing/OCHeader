@class NSString, AVAsset, UIImage, EcAsset, PHAsset, CAKAlbumAssetModel;

@interface AWECloudAlbumDetailPublishModel : NSObject

@property (retain, nonatomic) EcAsset *asset;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) PHAsset *phAsset;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) CAKAlbumAssetModel *cakAssetModel;

- (id)initWithAsset:(id)a0 index:(unsigned long long)a1;
- (BOOL)isLegalAsset;
- (void)generateCloudCAKAssetModel;
- (void).cxx_destruct;

@end
