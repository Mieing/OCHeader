@class NSMutableArray, NSObject;
@protocol WAJSContextPlugin_userAccountProtocol;

@interface WAJSContextPlugin_userAccount : WAJSContextPluginBase

@property (retain) NSMutableArray *arrEvent;
@property (retain) NSObject<WAJSContextPlugin_userAccountProtocol> *runningEvent;

- (id)init;
- (void)addUserAccountJSEvent:(id)a0 param:(id)a1;
- (void)removeUserAccountJSEvent:(id)a0;
- (void)reportPerformanceForEvent:(id)a0;
- (id)getDescriptionForDataPipeType:(unsigned long long)a0;
- (void)checkRunJSEvent;
- (void)mainThread_checkRunJSEvent;
- (void)addJSEvent:(id)a0;
- (void)removeAllJSEvent;
- (id)getNextRunningJSEventIfNotHave;
- (void)resetRunningEvent:(id)a0;
- (void)addConcurrentUserAccountJSEvent:(id)a0 param:(id)a1;
- (BOOL)handleEvent:(long long)a0 userInfo:(id)a1;
- (void).cxx_destruct;

@end
