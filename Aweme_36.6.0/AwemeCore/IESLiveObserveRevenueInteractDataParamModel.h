@class NSNumber, NSArray;

@interface IESLiveObserveRevenueInteractDataParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSArray *tags;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
