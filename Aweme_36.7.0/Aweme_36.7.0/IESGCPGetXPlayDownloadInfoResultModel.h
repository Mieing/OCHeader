@class IESGCPGetXPlayDownloadInfoDataModel;

@interface IESGCPGetXPlayDownloadInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPGetXPlayDownloadInfoDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
