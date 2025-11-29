@class NSString, JsWorkerIOS;

@interface IESECBasicJSWorker : NSObject <MessageCallback, ErrorCallback, IESECBasicJSWorkerBizDefine>

@property (retain, nonatomic) JsWorkerIOS *worker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsonStringVerifyFormat:(id)a0;

- (id)bizName;
- (void)executeScriptName:(id)a0 paramsArray:(id)a1;
- (void)setupWorkerEnvironmentWithCDNURL:(id)a0 callBack:(id /* block */)a1;
- (void)createWorkerWithCustomModulesInfo:(id)a0 callback:(id /* block */)a1;
- (void)executeCustomScript:(id)a0;
- (BOOL)useJSCore;
- (id)bizPath;
- (BOOL)isMutiThread;
- (void)getOriginResource:(id)a0 completion:(id /* block */)a1;
- (void)buildBaseWorker:(id)a0 customModulesInfo:(id)a1 callBack:(id /* block */)a2;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (void)handleError:(id)a0;

@end
