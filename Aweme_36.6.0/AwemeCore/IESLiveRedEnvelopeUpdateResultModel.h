@class NSNumber;

@interface IESLiveRedEnvelopeUpdateResultModel : IESLiveBridgeModel

@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSNumber *errorCode;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
