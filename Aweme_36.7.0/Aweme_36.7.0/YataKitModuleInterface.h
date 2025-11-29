@interface YataKitModuleInterface : NSObject

+ (id)yataInstanceWithDependencyProvider:(id)a0;
+ (id)applyPatches:(id)a0 JSONObject:(id)a1 errorClosure:(id /* block */)a2;

@end
