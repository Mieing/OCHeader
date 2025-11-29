@class NSString, IESGCPCgRestartGameErrorInfoModel, IESGCPCgRestartGameExtraInfoModel;

@interface IESGCPCgRestartGameParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *reason;
@property (retain, nonatomic) IESGCPCgRestartGameErrorInfoModel *errorInfo;
@property (retain, nonatomic) IESGCPCgRestartGameExtraInfoModel *extraInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
