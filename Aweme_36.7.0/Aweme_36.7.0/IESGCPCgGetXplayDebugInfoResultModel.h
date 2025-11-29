@class IESGCPCgGetXplayDebugInfoDataModel;

@interface IESGCPCgGetXplayDebugInfoResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPCgGetXplayDebugInfoDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
