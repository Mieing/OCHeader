@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface WCBackgroundQueueMgr : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableSet *backgroundDispatchQueues;
@property (retain, nonatomic) NSMutableSet *suspendedDispatchQueues;
@property (retain, nonatomic) NSMutableSet *backgroundOperationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mgrQueue;
@property (nonatomic) unsigned long long userType;
@property (nonatomic) long long thermalState;
@property (nonatomic) BOOL memoryExceeded;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL suspendByUserScene;
@property (nonatomic) BOOL suspendByPerfWarning;
@property (nonatomic) BOOL suspendByBackground;
@property (nonatomic) BOOL diskScanEnabled;
@property (nonatomic) BOOL ftsIndexEnabled;
@property (nonatomic) BOOL karaEnabled;
@property (nonatomic) BOOL isAppInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)registerDispatchQueue:(id)a0;
- (void)unregisterDispatchQueue:(id)a0;
- (void)registerOperationQueue:(id)a0;
- (void)unregisterOperationQueue:(id)a0;
- (BOOL)isAllowedLabel:(const char *)a0;
- (void)reevaluate;
- (void)pauseBackgroundWork;
- (void)recoverBackgroundWork;
- (void)addUserType:(unsigned long long)a0;
- (void)removeUserType:(unsigned long long)a0;
- (void)onMatrixPerfWarning:(id)a0;
- (void).cxx_destruct;

@end
