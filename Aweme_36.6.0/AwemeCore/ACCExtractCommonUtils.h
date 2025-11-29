@interface ACCExtractCommonUtils : NSObject

+ (id)resultIdBySourceId:(id)a0 bizId:(id)a1;
+ (id)selectCount:(long long)a0 source:(id)a1;
+ (id)findNearestTime:(double)a0 source:(id)a1;
+ (BOOL)saveResult:(id)a0 toFile:(id)a1;
+ (id)processCommonRecommendMaterials:(id)a0 materialsArrayType:(unsigned long long)a1;
+ (BOOL)notWaitZipURIForRequest;
+ (BOOL)shouldRequestByModel:(id)a0 scene:(long long)a1;

@end
