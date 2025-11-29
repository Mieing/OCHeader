@interface WAJSEventHandler_runInferenceSessionMB : WAJSEventHandler_BaseEvent

- (void)handleJSEvent:(id)a0;
- (id)convertTypeStr2TensorDataType:(id)a0;
- (id)convertTensorDataType2TypeStr:(id)a0;
- (id)arrSupportTypeStr;
- (id)arrSupportTensorDataType;

@end
