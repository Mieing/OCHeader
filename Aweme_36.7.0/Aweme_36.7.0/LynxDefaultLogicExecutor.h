@class LynxTemplateBundle, NSObject, NSString, LynxBackgroundRuntimeOptions, LynxViewGroup, LynxBackgroundRuntime;

@interface LynxDefaultLogicExecutor : NSObject <LynxLogicExecutor>

@property (retain, nonatomic) LynxBackgroundRuntime *runtime;
@property (weak, nonatomic) id context;
@property (weak, nonatomic) LynxTemplateBundle *templateBundle;
@property (retain, nonatomic) LynxBackgroundRuntimeOptions *runtimeOptions;
@property (weak, nonatomic) LynxViewGroup *lynxViewGroup;
@property (nonatomic) BOOL debuggable;
@property (retain, nonatomic) NSObject *initLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTemplateBundle:(id)a0 backgroundRuntimeOptions:(id)a1 lynxViewGroup:(id)a2 debuggable:(BOOL)a3;
- (void)initLynxBackgroundRuntimeIfNeeded;
- (void)processEvent:(id)a0 event:(id)a1;
- (void)onLynxEvent:(id)a0 event:(id)a1;
- (id)initWithRuntimeOptions:(id)a0 lynxViewGroup:(id)a1 debuggable:(BOOL)a2;
- (void).cxx_destruct;
- (void)destroy;

@end
