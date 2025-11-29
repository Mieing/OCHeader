@class NSString, NSNumber, IESLiveAnchorContractAVRecordParamsModel;

@interface IESLiveAnchorContractAVRecordParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSNumber *durationLimit;
@property (retain, nonatomic) IESLiveAnchorContractAVRecordParamsModel *params;
@property (copy, nonatomic) NSString *commonRecordTips;
@property (nonatomic) long long recordType;
@property (copy, nonatomic) NSString *customRecordTips;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
