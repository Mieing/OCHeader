@interface AWEClientAIJSBUtils : NSObject

+ (id)sharedInstance;

- (id)getFeaturesFromGroup:(id)a0 withFeatureList:(id)a1 featureName:(id)a2 params:(id)a3;
- (void)getNativeSmartFeatureWithParams:(id)a0 callback:(id /* block */)a1;

@end
