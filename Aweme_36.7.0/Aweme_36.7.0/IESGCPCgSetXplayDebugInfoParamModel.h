@class NSString, IESGCPCgSetXplayDebugInfoStreamingInfoModel, IESGCPCgSetXplayDebugInfoSupplierSdkInfoModel, NSNumber;

@interface IESGCPCgSetXplayDebugInfoParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSNumber *action;
@property (retain, nonatomic) IESGCPCgSetXplayDebugInfoStreamingInfoModel *streamingInfo;
@property (retain, nonatomic) IESGCPCgSetXplayDebugInfoSupplierSdkInfoModel *supplierSdkInfo;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
