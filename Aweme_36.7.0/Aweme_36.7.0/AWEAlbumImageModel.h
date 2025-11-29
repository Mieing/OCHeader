@class UIImage, NSString, AWEAssetModel;

@interface AWEAlbumImageModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *assetLocalIdentifier;
@property (retain, nonatomic) AWEAssetModel *asset;
@property (nonatomic) long long detectResult;
@property (nonatomic) BOOL networkAccessAllowed;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
