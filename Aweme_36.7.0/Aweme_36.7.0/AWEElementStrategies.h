@class AWEElementHideStrategy, NSDictionary;

@interface AWEElementStrategies : NSObject

@property (nonatomic) long long elementID;
@property (retain, nonatomic) AWEElementHideStrategy *hideStrategy;
@property (retain, nonatomic) NSDictionary *extraInfo;

+ (id)elementStrategiesMapFromRegistryJsonArray:(id)a0;
+ (id)elementStrategiesMapFromAwemeJsonArray:(id)a0;
+ (id)elementStrategiesFromAwemeJson:(id)a0;
+ (id)elementStrategiesFromRegistryJson:(id)a0;

- (void).cxx_destruct;

@end
