@class IESLiveLiveGetInteractToolInfoCommonParamsModel, IESLiveLiveGetInteractToolInfoStatusParamsModel;

@interface IESLiveLiveGetInteractToolInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveLiveGetInteractToolInfoStatusParamsModel *statusParams;
@property (retain, nonatomic) IESLiveLiveGetInteractToolInfoCommonParamsModel *commonParams;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
