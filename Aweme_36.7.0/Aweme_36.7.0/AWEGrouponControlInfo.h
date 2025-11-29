@class NSNumber, NSDictionary;

@interface AWEGrouponControlInfo : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *topCardIdx;
@property (retain, nonatomic) NSNumber *highLightCardIdx;
@property (copy, nonatomic) NSDictionary *topCardFrequencyData;
@property (copy, nonatomic) NSDictionary *taskConfig;
@property (retain, nonatomic) NSNumber *insertCardIndex;
@property (retain, nonatomic) NSNumber *halfScreenAnimationLimit;
@property (copy, nonatomic) NSDictionary *frequencyData;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
