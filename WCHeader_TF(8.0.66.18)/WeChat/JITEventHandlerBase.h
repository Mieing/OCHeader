@class JITRuntime;

@interface JITEventHandlerBase : NSObject

@property (weak, nonatomic) JITRuntime *runtime;

- (id)makeReturnObject:(id)a0 errCode:(long long)a1 errMsg:(id)a2;
- (id)makeReturnObjectOk:(id)a0;
- (id)makeReturnObjectFail:(long long)a0 errMsg:(id)a1;
- (id)apiName;
- (void).cxx_destruct;

@end
