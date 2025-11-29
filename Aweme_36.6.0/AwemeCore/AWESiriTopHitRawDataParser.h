@interface AWESiriTopHitRawDataParser : NSObject

+ (id)normalizedFromDataSource:(long long)a0 rawData:(id)a1;
+ (id)modelFromABTest:(id)a0;
+ (id)modelFromV3Request:(id)a0;
+ (id)rawAppEntityDataFromDynamicModel:(id)a0;
+ (id)appIntentDataFromNewInterface:(id)a0;
+ (id)normalizedFromOldInterface:(id)a0;
+ (id)dynamicTopHitFromPushPayload:(id)a0;
+ (id)dynamicTopHitFromSiriPushTemplate:(id)a0;
+ (id)dynamicTopHitFromSpotlightQuery:(id)a0;
+ (id)normalizedCandidateFromModel:(id)a0;

@end
