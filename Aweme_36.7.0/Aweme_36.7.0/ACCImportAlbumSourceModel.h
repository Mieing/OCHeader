@class NSString, PHAsset;

@interface ACCImportAlbumSourceModel : NSObject

@property (nonatomic) unsigned long long sourceType;
@property (copy, nonatomic) NSString *phAssetLocalIdentifier;
@property (retain, nonatomic) PHAsset *asset;
@property (copy, nonatomic) NSString *imageFilePath;
@property (copy, nonatomic) NSString *compressedImageFilePath;
@property (copy, nonatomic) NSString *modernTextModeIdentifier;

- (void).cxx_destruct;

@end
