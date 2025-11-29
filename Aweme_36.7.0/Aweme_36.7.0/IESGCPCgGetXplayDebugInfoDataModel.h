@class IESGCPCgGetXplayDebugInfoSupplierSdkInfoModel, IESGCPCgGetXplayDebugInfoStreamingInfoModel;

@interface IESGCPCgGetXplayDebugInfoDataModel : IESLiveBridgeModel

@property (retain, nonatomic) IESGCPCgGetXplayDebugInfoStreamingInfoModel *streamingInfo;
@property (retain, nonatomic) IESGCPCgGetXplayDebugInfoSupplierSdkInfoModel *supplierSdkInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
