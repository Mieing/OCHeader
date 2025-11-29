@class WAPermissionUserAuthTask, NSString, WxaExternalInfo, NSMutableDictionary, NSMutableArray;
@protocol WAPermissionUserAuthImplDelegate;

@interface WAPermissionUserAuthImpl : NSObject <WAPermissionUserAuthTaskDelegate> {
    unsigned int _debugModeType;
    WxaExternalInfo *_externalInfo;
    NSMutableArray *_arrAuthTaskWaitQueue;
    WAPermissionUserAuthTask *_runningTask;
    NSMutableDictionary *_dicAuthInfo;
}

@property (weak, nonatomic) id<WAPermissionUserAuthImplDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDebugModeType:(unsigned int)a0 externalInfo:(id)a1;
- (void)dealloc;
- (void)checkUserAuthWithAPPID:(id)a0 permissionAppID:(id)a1 jsapi:(id)a2 model:(id)a3 handler:(id /* block */)a4 failHandler:(id /* block */)a5 transferHandler:(id /* block */)a6 scene:(unsigned long long)a7;
- (void)resetAuthInfo;
- (void)mainThread_resetAuthInfo;
- (void)mainThread_checkUserAuthWithAPPID:(id)a0 permissionAppID:(id)a1 jsapi:(id)a2 model:(id)a3 handler:(id /* block */)a4 failHandler:(id /* block */)a5 transferHandler:(id /* block */)a6 scene:(unsigned long long)a7;
- (void)addAuthWaitQueue:(id)a0;
- (id)popAuthTaskInWaitQueue;
- (void)checkUserAuthWaitQueue;
- (void)removeRunningAuthTask:(id)a0;
- (void)asyncRemoveRunningAuthTask:(id)a0;
- (void)updateAuthInfoOKForJSAPI:(id)a0 source:(unsigned long long)a1;
- (id)getAuthInfoWithJSAPI:(id)a0;
- (void)saveAuthInfo:(id)a0 withJSAPI:(id)a1;
- (void)authOKWithJSAPI:(id)a0 handler:(id /* block */)a1 scene:(unsigned long long)a2;
- (void)authFailWithJSAPI:(id)a0 failHandler:(id /* block */)a1 errMsg:(id)a2 errNo:(unsigned int)a3 scene:(unsigned long long)a4;
- (void)authTaskComplete:(id)a0;
- (void)onTransferAuthDidCompelete:(id)a0 jsapiName:(id)a1 transferHandler:(id /* block */)a2 result:(id)a3 scene:(unsigned long long)a4;
- (void).cxx_destruct;

@end
