@class IESECGetAdInfoDataModel;

@interface IESECGetAdInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESECGetAdInfoDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
