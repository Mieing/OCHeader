@class NSNumber, NSDictionary;

@interface AWENearbySettingsControlInfo : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *topCardType;
@property (copy, nonatomic) NSDictionary *taskConfig;
@property (nonatomic) unsigned long long transformerOfflineType;
@property (retain, nonatomic) NSNumber *halfScreenAnimationLimit;
@property (copy, nonatomic) NSDictionary *frequencyData;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
