@class NSString, NSNumber;

@interface IESLiveAnchorContractAVRecordParamsModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSNumber *encrypt;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
