@class IESLiveGetPersonCardInfoDataModel;

@interface IESLiveGetPersonCardInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveGetPersonCardInfoDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
