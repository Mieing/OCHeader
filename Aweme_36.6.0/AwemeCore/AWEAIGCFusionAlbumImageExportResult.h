@class NSString, UIImage, ACCAIGCLoraCheckModel, AWEAssetModel;

@interface AWEAIGCFusionAlbumImageExportResult : NSObject

@property (retain, nonatomic) UIImage *resultImage;
@property (copy, nonatomic) NSString *localFilePath;
@property (retain, nonatomic) ACCAIGCLoraCheckModel *checkModel;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *phLocalIdentifier;
@property (retain, nonatomic) AWEAssetModel *aweAssetModel;

- (void).cxx_destruct;

@end
