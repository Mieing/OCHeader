@interface AWEShareToStoryJSONUtils : NSObject

+ (id)findObjectsWithURLInJSON:(id)a0;
+ (id)getConstraintValueInDictionary:(id)a0 withTargetID:(id)a1 constraintKey:(id)a2;
+ (void)findObjectsWithURLInJSON:(id)a0 results:(id)a1;
+ (void)updateTemplateDict:(id)a0 withContentDict:(id)a1;
+ (void)findPathToID:(id)a0 inDictionary:(id)a1 path:(id)a2;
+ (void)applyUpdates:(id)a0 withPath:(id)a1 contentDict:(id)a2;
+ (void)mergeDict:(id)a0 withDict:(id)a1;
+ (id)updatedTemplateDict:(id)a0 withContentDicts:(id)a1;

@end
