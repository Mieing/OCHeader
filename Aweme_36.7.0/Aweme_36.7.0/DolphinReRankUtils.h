@interface DolphinReRankUtils : NSObject

+ (BOOL)isValidModel:(id)a0;
+ (id)adapterFieldName:(id)a0 scene:(id)a1;
+ (id)generateModelFromOrigin:(id)a0 multiKeyPaths:(id)a1;
+ (id)generateSortedArrayFromOriginDict:(id)a0 isAd:(BOOL)a1 generateNewIdIfNeed:(BOOL)a2;
+ (id)dolphinRerankIdsForModel:(id)a0;
+ (id)templateKeyTransferToModelPropertyWithModel:(id)a0 templateDict:(id)a1;
+ (id)generateMatchedTemplate:(id)a0 propertyTemplateDict:(id)a1;
+ (id)generateModelFromOrigin:(id)a0 keyPath:(id)a1;
+ (void)generateSortedArrayFromOrigin:(id)a0 rerankIDPrefix:(id)a1 collectArray:(id)a2 isAd:(BOOL)a3 generateNewIdIfNeed:(BOOL)a4;
+ (id)errorWithMessage:(id)a0;

@end
