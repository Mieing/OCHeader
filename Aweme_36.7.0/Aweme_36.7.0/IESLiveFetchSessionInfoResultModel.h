@class IESLiveFetchSessionInfoDataModel;

@interface IESLiveFetchSessionInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveFetchSessionInfoDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
