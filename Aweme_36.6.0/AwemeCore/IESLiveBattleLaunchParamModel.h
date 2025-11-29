@class NSNumber, NSDictionary;

@interface IESLiveBattleLaunchParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *eventName;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
