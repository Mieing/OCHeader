@interface BDATMAssembleTool : NSObject

+ (id)addOriginParams:(id)a0 withExtraParams:(id)a1;
+ (id)updateOriginParams:(id)a0 withExtraParams:(id)a1;
+ (id)removeParams:(id)a0 withOriginParams:(id)a1;
+ (id)assembleUnitContentParams:(id)a0 withDynamicParams:(id)a1;
+ (id)assembleCopyContentParams:(id)a0 originalParams:(id)a1 dynamicParams:(id)a2;
+ (void)convertDictionaryToStringWithOriginParams:(id)a0 targetParams:(id)a1;
+ (id)assembleOriginParams:(id)a0 withContentParams:(id)a1;
+ (id)assembleContentParams:(id)a0 withDynamicParams:(id)a1;
+ (id)assembleParams:(id)a0 withCommonParams:(id)a1 withDynamicParams:(id)a2;

@end
