@interface OHRInputDataHelper : NSObject

+ (id)sharedHelper;

- (id)sampleArray:(id)a0 targetCount:(long long)a1;
- (id)convertTouchDataToPredictInputDict:(id)a0 sensorData:(id)a1 error:(id *)a2;
- (id)buildFeatureKeyListWithPrefixArray:(id)a0 groupCount:(long long)a1;
- (id)convertTouchDataToPredictInputDict:(id)a0 error:(id *)a1;

@end
