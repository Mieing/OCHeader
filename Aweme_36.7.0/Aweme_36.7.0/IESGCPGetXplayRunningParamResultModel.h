@class IESGCPGetXplayRunningParamDataModel;

@interface IESGCPGetXplayRunningParamResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPGetXplayRunningParamDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
