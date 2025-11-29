@class MBJsApiMetaInfo, MagicBrushService, MBRuntime;
@protocol IMBBizContextDelegate;

@interface MBEventHandlerBase : NSObject

@property (weak, nonatomic) MBRuntime *runtime;
@property (weak, nonatomic) MagicBrushService *service;
@property (retain, nonatomic) MBJsApiMetaInfo *meta;
@property (readonly, nonatomic) BOOL isSync;
@property (readonly, weak, nonatomic) id<IMBBizContextDelegate> context;
@property (readonly, nonatomic) unsigned int invokeContextId;

- (id)getFileSystem;
- (id)createObject;
- (id)createObject:(id)a0;
- (void)dispatch:(id)a0 param:(id)a1;
- (void)dispatch:(id)a0 paramDict:(id)a1;
- (id)makeReturnObject:(id)a0 errCode:(long long)a1 errMsg:(id)a2;
- (id)makeReturnObjectOkWithDictionary:(id)a0;
- (id)makeReturnObjectOk:(id)a0;
- (id)makeReturnObjectFail:(long long)a0 errMsg:(id)a1;
- (id)makeReturnWithMBErrorInfo:(id)a0;
- (id)makeReturnWithMBErrorInfo:(id)a0 extErrMsg:(id)a1;
- (id)apiName;
- (void)runCodeInJsThread:(id /* block */)a0;
- (void)runCodeInJsThreadSync:(id /* block */)a0;
- (BOOL)invokeInMainThread;
- (void)setApiSync:(BOOL)a0;
- (void)setBizContext:(id)a0;
- (void)setInvokeFromContextId:(unsigned int)a0;
- (void).cxx_destruct;

@end
