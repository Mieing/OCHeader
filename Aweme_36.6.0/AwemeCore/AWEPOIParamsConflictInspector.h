@interface AWEPOIParamsConflictInspector : NSObject

+ (BOOL)canCheckConflict:(id)a0;
+ (id)keysNeedChecked:(id)a0 to:(id)a1;
+ (id)checkConflict:(id)a0 withDict:(id)a1 whitelist:(id)a2 atPath:(id)a3 curDepth:(long long)a4;
+ (void)trackConflict:(id)a0 oldDict:(id)a1 caller:(id)a2;
+ (void)checkIfSessionConflict:(id)a0 newSession:(id)a1 caller:(id)a2;

@end
