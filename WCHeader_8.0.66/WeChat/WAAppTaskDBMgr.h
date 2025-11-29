@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WAAppTaskDBMgr : MMUserService <WAAppTaskMgrExt, MMServiceProtocol> {
    NSMutableDictionary *_dicAppID2TaskDB;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getTaskDBWithAppID:(id)a0;
- (id)getAccessDBQueue;
- (id)getAndNewTaskDBIfNotExist:(id)a0;
- (void)clearAllTaskDB;
- (void)clearTaskDBWithAppID:(id)a0;
- (void)onAppTaskTerminate:(id)a0;
- (void).cxx_destruct;

@end
