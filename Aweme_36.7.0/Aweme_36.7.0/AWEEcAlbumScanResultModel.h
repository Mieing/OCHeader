@class AWEEcAlbumScanDataModel;

@interface AWEEcAlbumScanResultModel : IESLiveBridgeModel

@property (retain, nonatomic) AWEEcAlbumScanDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
