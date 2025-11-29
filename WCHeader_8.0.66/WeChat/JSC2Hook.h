@interface JSC2Hook : NSObject

+ (BOOL)removeICUIfNeeded;
+ (id)getICUDataPath:(unsigned int *)a0;
+ (void)setICUDataPath:(id)a0;
+ (BOOL)checkICUData;
+ (BOOL)isNormal;
+ (BOOL)setupICU;
+ (id)checkSubclasses;
+ (id)checkCategories;
+ (id)checkGlobalVariables;

@end
