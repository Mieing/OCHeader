@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WCTuringMgr : MMUserService <MMServiceProtocol, MMKernelExt> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _bEnable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)start:(unsigned long long)a0 action:(int)a1 duration:(float)a2;
- (void)keyboardWillAppear:(id)a0 withContext:(id)a1;
- (void)keyboardWillDisappear:(id)a0 withContext:(id)a1 isFinishInput:(BOOL)a2;
- (void)onAuthOK;
- (void)reportHumenRecord;
- (void)reportOwnerRecord;
- (void).cxx_destruct;

@end
