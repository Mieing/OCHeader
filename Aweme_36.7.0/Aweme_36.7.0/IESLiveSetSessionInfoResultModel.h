@class IESLiveSetSessionInfoDataModel;

@interface IESLiveSetSessionInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveSetSessionInfoDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
