@class NSNumber, NSDictionary;

@interface AWENearbyGrouponControlInfo : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *topCardIdx;
@property (copy, nonatomic) NSDictionary *taskConfig;
@property (retain, nonatomic) NSNumber *insertCardIndex;
@property (retain, nonatomic) NSNumber *halfScreenAnimationLimit;
@property (copy, nonatomic) NSDictionary *frequencyData;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
