@class NSString, IESLiveAnchorContractAVRecordDataModel;

@interface IESLiveAnchorContractAVRecordResultModel : IESLiveBridgeModel

@property (retain, nonatomic) IESLiveAnchorContractAVRecordDataModel *data;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *statusMsg;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformToDictionary:(id)a0;
- (void).cxx_destruct;

@end
