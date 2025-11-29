@class IESGCPGetXplayCommonParamDataModel;

@interface IESGCPGetXplayCommonParamResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPGetXplayCommonParamDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
