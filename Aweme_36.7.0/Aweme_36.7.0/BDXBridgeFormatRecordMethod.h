@interface BDXBridgeFormatRecordMethod : BDXBridgeMethod

+ (id)metaInfo;

- (Class)paramModelClass;
- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (Class)resultModelClass;
- (void)checkRecordingTimeout:(id)a0;
- (long long)authType;
- (void)resetContext;
- (void)audioRecorderDidFinishRecording:(id)a0 successfully:(BOOL)a1;
- (id)methodName;

@end
