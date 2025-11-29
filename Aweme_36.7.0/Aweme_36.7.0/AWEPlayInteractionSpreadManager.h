@class NSString, AWEUITaskDelaySpreadExecutor, NSMutableSet, NSMutableArray;

@interface AWEPlayInteractionSpreadManager : NSObject <NunkiMessage, AWEPlayInteractionSpreadProtocol>

@property (retain, nonatomic) AWEUITaskDelaySpreadExecutor *spreadExecutor;
@property (retain, nonatomic) NSMutableArray *spreadTaskArray;
@property (retain, nonatomic) NSMutableArray *insertSpreadTaskArray;
@property (retain, nonatomic) NSMutableSet *groupIDSet;
@property (nonatomic) BOOL ifSkipSpreadSpiltSetData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSpreadWithReferString:(id)a0;
+ (BOOL)enableActivateInfoWithDataSpread;
+ (double)spreadInterval;
+ (BOOL)enableSpreadWithModel:(id)a0 andReferString:(id)a1;
+ (BOOL)enableFlushTracker;
+ (id)config;
+ (BOOL)enabled;
+ (id)shareInstance;

- (void)didReceiveResourceNotification;
- (void)suspendedSpreadTask;
- (void)resumeSpreadTask;
- (BOOL)checkFinishedWithGroupID:(id)a0;
- (void)cancelWithGroupID:(id)a0;
- (void)addSpreadTask:(id /* block */)a0;
- (void)flushWithGroupID:(id)a0;
- (void)addInsertSpreadTask:(id /* block */)a0;
- (void)insertSpreadTasksWithGroupID:(id)a0;
- (void)invokeSpreadTasksWithGroupID:(id)a0;
- (void)cancelSpreadTaskIfNeeded:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
