@class NSNumber;

@interface IESECLiveEcOpenRecommendMallOptionalStrategyModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *maxNum;
@property (retain, nonatomic) NSNumber *showNum;
@property (retain, nonatomic) NSNumber *clickNum;
@property (retain, nonatomic) NSNumber *fillType;
@property (nonatomic) BOOL enableVM;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
