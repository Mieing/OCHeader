@class IESLiveGetElderModeStateDataModel;

@interface IESLiveGetElderModeStateResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveGetElderModeStateDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
