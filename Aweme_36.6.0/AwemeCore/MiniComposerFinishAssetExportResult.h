@class CAKAssetEditResultModel, NSString, ACCVideoImportOutputInfo, AVURLAsset, NSError, ACCImageImportOutputInfo, AWEAssetModel;

@interface MiniComposerFinishAssetExportResult : NSObject

@property (retain, nonatomic) NSString *UUIDString;
@property (retain, nonatomic) AWEAssetModel *assetModel;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) CAKAssetEditResultModel *editResultModel;
@property (nonatomic) long long type;
@property (retain, nonatomic) AVURLAsset *videoAsset;
@property (retain, nonatomic) ACCVideoImportOutputInfo *outputVideoInfo;
@property (retain, nonatomic) ACCImageImportOutputInfo *outputImageInfo;

- (void).cxx_destruct;

@end
