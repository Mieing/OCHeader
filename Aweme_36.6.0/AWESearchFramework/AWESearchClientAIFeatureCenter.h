@class NSMutableDictionary;

@interface AWESearchClientAIFeatureCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *featureToBlockMap;
@property (retain, nonatomic) NSMutableDictionary *businessToFeatureMap;

+ (id)sharedInstance;

- (void)clearAllFeatures;
- (void)registerFeatureWithConfig:(id)a0;
- (id)getFeatureWithBusinessName:(id)a0;
- (id)generateKeyWithConfig:(id)a0;
- (id)generateKeyWithBusinessName:(id)a0 andFeatureName:(id)a1;
- (id /* block */)getFeatureWithConfig:(id)a0;
- (void)deleteFeatureWithConfig:(id)a0;
- (void)deleteFeatureWithBusinessName:(id)a0;
- (void).cxx_destruct;

@end
