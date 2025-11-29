@class IESLiveGetDressInfoDataModel;

@interface IESLiveGetDressInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveGetDressInfoDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
