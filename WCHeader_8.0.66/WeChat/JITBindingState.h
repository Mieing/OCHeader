@class JITRuntime, JSContext;

@interface JITBindingState : NSObject

@property (nonatomic) struct HolderBase { void /* function */ **x0; unsigned int x1; struct OpaqueJSContext *x2; } *scriptState;
@property (retain, nonatomic) JSContext *context;
@property (weak, nonatomic) JITRuntime *runtime;
@property (nonatomic) struct OpaqueJSValue { } *reflectConstructFunc;
@property (nonatomic) struct OpaqueJSValue { } *promiseConstructor;
@property (nonatomic) int instanceId;
@property (nonatomic) void *instance2idWeakMap;
@property (nonatomic) struct OpaqueJSValue { } *setBindingIdFunc;
@property (nonatomic) struct OpaqueJSValue { } *getBindingIdFunc;
@property (nonatomic) void *id2InstanceMap;
@property (nonatomic) struct OpaqueJSValue { } *setBindingObjFunc;
@property (nonatomic) struct OpaqueJSValue { } *getBindingObjFunc;
@property (nonatomic) struct OpaqueJSValue { } *deleteBindingObjFunc;

- (id)packReturnWithOk:(id)a0 hasNestedBuffers:(BOOL)a1;
- (id)packReturnWithErrCode:(long long)a0 errmsg:(id)a1;
- (id)packWrapperObject:(int)a0 type:(long long)a1 meta:(id)a2;
- (int)getBindingIdFromBindingObj:(struct OpaqueJSValue { } *)a0;
- (struct OpaqueJSValue { } *)getBindingObjFromBindingId:(int)a0;
- (void)deleteBindingObj:(struct OpaqueJSValue { } *)a0;
- (void)deleteBindingObjById:(int)a0;
- (id)packObject:(struct OpaqueJSValue { } *)a0 type:(long long)a1 meta:(id)a2;
- (struct OpaqueJSValue { } *)unpackObject:(int)a0;
- (int)getBindingObjectId:(id)a0;
- (id)packBindingObject:(struct OpaqueJSValue { } *)a0;
- (struct OpaqueJSValue { } *)unpackBindingObject:(int)a0;
- (int)getFunctionId:(id)a0;
- (id)packFunction:(struct OpaqueJSValue { } *)a0;
- (struct OpaqueJSValue { } *)unpackFunction:(int)a0;
- (int)getPromiseId:(id)a0;
- (id)packPromise:(struct OpaqueJSValue { } *)a0;
- (struct OpaqueJSValue { } *)unpackPromise:(int)a0;
- (struct OpaqueJSValue { } *)constructJsObjectWithClassName:(const char *)a0 args:(struct OpaqueJSValue { } *)a1;
- (struct OpaqueJSValue { } *)constructJsObject:(struct OpaqueJSValue { } *)a0 args:(struct OpaqueJSValue { } *)a1;
- (int)getBindingIdFromWrappedObject:(id)a0 expectedType:(long long)a1;
- (int)getBindingIdFromWrappedObject:(id)a0;
- (long long)getBindingTypeFromWrappedObject:(id)a0;
- (id)getBindingMetaFromWrappedObject:(id)a0;
- (long long)getResponseTypeFromExtraInfo:(id)a0;
- (id)convertJSValueToNSObjectRecursively:(struct OpaqueJSValue { } *)a0 hasNestedBuffer:(BOOL *)a1 responseType:(long long)a2;
- (id)convertJSValueToNSObject:(struct OpaqueJSValue { } *)a0 hasNestedBuffer:(BOOL *)a1 responseType:(long long)a2;
- (id)convertNSObjectToJSValueRecursively:(id)a0 responseType:(long long)a1;
- (id)convertNSObjectToJSValue:(id)a0 responseType:(long long)a1;
- (id)handlePromise:(struct OpaqueJSValue { } *)a0 responseType:(long long)a1;
- (id)initWithRuntime:(id)a0;
- (void)dealloc;
- (void)setupContext;
- (void)releaseContext;
- (id)handleJITBindingCall:(id)a0;
- (id)handleBindingCmd:(long long)a0 target:(id)a1 funcName:(id)a2 args:(id)a3 extra:(id)a4;
- (id)handleBindingCmdNew:(id)a0 args:(id)a1 meta:(id)a2 extra:(id)a3;
- (id)handleBindingCmdDel:(int)a0 meta:(id)a1 extra:(id)a2;
- (id)handleBindingCmdSet:(struct OpaqueJSValue { } *)a0 propName:(id)a1 newValue:(id)a2 meta:(id)a3 extra:(id)a4;
- (id)handleBindingCmdGet:(struct OpaqueJSValue { } *)a0 propName:(id)a1 meta:(id)a2 extra:(id)a3;
- (id)handleBindingCmdCall:(struct OpaqueJSValue { } *)a0 funcName:(id)a1 args:(id)a2 meta:(id)a3 extra:(id)a4;
- (BOOL)isPromise:(struct OpaqueJSValue { } *)a0;
- (void).cxx_destruct;

@end
