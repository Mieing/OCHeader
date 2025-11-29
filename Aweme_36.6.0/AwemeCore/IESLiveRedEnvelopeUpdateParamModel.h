@class NSNumber, NSString;

@interface IESLiveRedEnvelopeUpdateParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *boxId;
@property (retain, nonatomic) NSNumber *boxStatus;
@property (retain, nonatomic) id extraInfo;
@property (copy, nonatomic) NSString *type;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
