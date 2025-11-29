@class NSMutableDictionary, HybridResourceLoaderConfig, HybridRLOperator, NSNumber;

@interface HybridResourceConfig : NSObject

@property (retain, nonatomic) NSMutableDictionary *falconPrefixList;
@property (retain, nonatomic) HybridResourceLoaderConfig *loaderConfig;
@property (retain, nonatomic) HybridRLOperator *advancedOperator;
@property (retain, nonatomic) NSNumber *useForest;

+ (id)defaultResourceConfig;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
