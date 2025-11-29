@interface LynxViewConfigProcessor : NSObject

+ (void)parseLynxViewBuilder:(id)a0;
+ (void)setConfig:(id)a0 key:(id)a1 value:(id)a2;
+ (void)setEnableMultiAsyncThread:(id)a0 builder:(id)a1;
+ (void)setLynxRuntimeType:(id)a0 builder:(id)a1;
+ (void)setEnableBytecode:(id)a0 builder:(id)a1;
+ (void)setBytecodeUrl:(id)a0 builder:(id)a1;
+ (void)setEnableVSyncAlignedMessageLoop:(id)a0 builder:(id)a1;
+ (void)setEnableUnifiedPipeline:(id)a0 builder:(id)a1;
+ (void)setPlatformConfig:(id)a0 builder:(id)a1;
+ (void)setEnableJSGroupThread:(id)a0 builder:(id)a1;
+ (void)setBoolProperty:(id)a0 forKey:(id)a1 builder:(id)a2;
+ (id)parseBoolFromObject:(id)a0;

@end
