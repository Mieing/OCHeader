@interface SECLynxPiperNameHelper : NSObject

+ (id)piperNameForMethod:(id)a0 inModule:(id)a1;
+ (BOOL)_isStandardBridgeModule:(id)a0;
+ (void)_asyncBuildMethodDictsForModule:(Class)a0;
+ (id)_lookupJSNameForMethod:(id)a0 inModule:(Class)a1;
+ (id)_MethodDictsForModule:(Class)a0;
+ (void)_buildMethodDictsForModule:(Class)a0;
+ (void)setup;

@end
