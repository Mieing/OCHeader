@interface BDXBridgeGetDeviceStatsMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (float)cpu_usage;
- (id)fmt2precious:(float)a0;
- (struct _MemoryInfoInMB { float x0; float x1; float x2; float x3; })memory_info:(id)a0;
- (float)temperature;
- (id)methodName;

@end
