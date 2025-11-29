@class MemoryMappedKV, NSString;

@interface CameraScanService : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *_innerMMKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)defaultMMKV;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtensionAndObserver;
- (void)unRegisterExtensionAndObserver;
- (void)captureSessionRuntimeError:(id)a0;
- (void)captureSessionDidStartRunning:(id)a0;
- (void)captureSessionDidStopRunning:(id)a0;
- (void)captureSessionWasInterrupted:(id)a0;
- (void)captureSessionInterruptionEnded:(id)a0;
- (void).cxx_destruct;

@end
