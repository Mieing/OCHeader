@class IESECFetchFilteredEntranceInfoDataModel;

@interface IESECFetchFilteredEntranceInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESECFetchFilteredEntranceInfoDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
