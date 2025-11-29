@class NSDictionary;

@interface TMBPEACollectionErrorStrategy : NSObject

@property (copy, nonatomic) NSDictionary *config;
@property (retain, nonatomic) NSDictionary *strategyDict;

+ (id)defaultErrorStrategyConfig;
+ (id)unitErrors;

- (void)updateConfig:(id)a0;
- (void)setupWithPresetConfig:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (id)space;

@end
