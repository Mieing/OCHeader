@class IESECGetCjInfoDataModel;

@interface IESECGetCjInfoResultModel : IESLiveBridgeModel

@property (nonatomic) long long code;
@property (retain, nonatomic) IESECGetCjInfoDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
