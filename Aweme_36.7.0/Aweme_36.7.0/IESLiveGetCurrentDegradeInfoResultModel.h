@class IESLiveGetCurrentDegradeInfoDataModel;

@interface IESLiveGetCurrentDegradeInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveGetCurrentDegradeInfoDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
