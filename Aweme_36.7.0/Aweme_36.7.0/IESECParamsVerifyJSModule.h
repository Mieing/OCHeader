@class IESECBridgeExcutor, BTDWeakProxy;
@protocol IESECParamsVerifyJSModuleDelegate;

@interface IESECParamsVerifyJSModule : IESECBaseJSModule

@property (retain, nonatomic) IESECBridgeExcutor *excutor;
@property (weak, nonatomic) id<IESECParamsVerifyJSModuleDelegate> delegate;
@property (retain, nonatomic) BTDWeakProxy *liveContextProxy;

+ (id)methodLookup;
+ (id)getExcutorWithContext:(id)a0;
+ (id)name;

- (id)initWithParam:(id)a0;
- (id)getStorage:(id)a0;
- (void)call:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (id)p_getResultWrapperWithCode:(unsigned long long)a0 result:(id)a1 error:(id)a2;
- (void)openSchema:(id)a0;
- (void)fetch:(id)a0 params:(id)a1 method:(id)a2 callback:(id /* block */)a3 data:(id)a4 headers:(id)a5;
- (BOOL)alogSwitch;
- (void)setStorage:(id)a0 value:(id)a1;
- (BOOL)customHandle:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (BOOL)alogUploadSwitch;
- (void)terminate;
- (void).cxx_destruct;

@end
