@class NSString, PHAsset;

@interface ACCCloudAlbumOriginAssetModel : NSObject

@property (nonatomic) unsigned long long mediaType;
@property (copy, nonatomic) NSString *localID;
@property (retain, nonatomic) PHAsset *asset;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) double duration;

- (void).cxx_destruct;

@end
