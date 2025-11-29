@class BTDWeakProxy, NSArray, JsWorkerIOS, NSString, IESECHybridParamsVerifyHelperConfig;
@protocol IESECHybridParamsVerifyCallBackDelegate;

@interface IESECHybridParamsVerifyHelper : NSObject <MessageCallback, ErrorCallback, IESECParamsVerifyJSModuleDelegate>

@property (retain, nonatomic) JsWorkerIOS *worker;
@property (weak, nonatomic) id<IESECHybridParamsVerifyCallBackDelegate> delegate;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ errorBlock;
@property (copy, nonatomic) NSArray *customModules;
@property (copy, nonatomic) NSString *moduleName;
@property (retain, nonatomic) IESECHybridParamsVerifyHelperConfig *config;
@property (retain, nonatomic) id fakeRoomContext;
@property (retain, nonatomic) BTDWeakProxy *liveContextProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsonStringVerifyFormat:(id)a0;

- (void)stopProcess;
- (id)initWithCustomModules:(id)a0 callBackDelegate:(id)a1;
- (void)executeCustomScript:(id)a0 withUrl:(id)a1 withCallBack:(id /* block */)a2;
- (void)buildWorker:(id)a0 isSync:(BOOL)a1 followGlobalSetting:(BOOL)a2 withCallBack:(id /* block */)a3;
- (void)executeScriptName:(id)a0 paramsArray:(id)a1;
- (void)buildWorker:(id)a0 withCallBack:(id /* block */)a1;
- (void)runFullVerify:(id)a0 scriptMethodName:(id)a1 params:(id)a2 contextProvider:(id)a3 result:(id /* block */)a4;
- (void)executeCustomScript:(id)a0;
- (void)getOriginResource:(id)a0 completion:(id /* block */)a1;
- (void)buildBaseWorker:(id)a0 withCallBack:(id /* block */)a1;
- (void)setupWorkerEnvironmentWithCallBack:(id /* block */)a0;
- (void)createWorkerWithCustomModule:(id)a0 callback:(id /* block */)a1;
- (void)trackVerifyInitWithCategory:(id)a0 metric:(id)a1;
- (void)stopCurrentWorkerProcess;
- (id)initWithCustomModules:(id)a0 callBackDelegate:(id)a1 config:(id)a2;
- (id)initWithCustomModules:(id)a0 successBlock:(id /* block */)a1 errorBlock:(id /* block */)a2;
- (void)buildDegradeWorker:(id)a0 withCallBack:(id /* block */)a1;
- (void)buildAptTestcaseWorker:(id)a0 withCallBack:(id /* block */)a1;
- (void)forceBuildWorker:(id)a0 withCallBack:(id /* block */)a1;
- (void)executeVerifyWithMsg:(id)a0;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (void)handleError:(id)a0;
- (void)dealloc;

@end
