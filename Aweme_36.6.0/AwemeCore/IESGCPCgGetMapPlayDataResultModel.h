@class IESGCPCgGetMapPlayDataDataModel;

@interface IESGCPCgGetMapPlayDataResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPCgGetMapPlayDataDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
