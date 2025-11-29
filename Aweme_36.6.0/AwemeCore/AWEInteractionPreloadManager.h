@class AWEAwemePageContext, NSString, AWEUITaskDelaySpreadExecutor, NSMutableArray, AWEInteractionPreloadReuseDeque;

@interface AWEInteractionPreloadManager : NSObject <AWEInteractionPreloadManagerProtocol, AWEPlayInteractionSpreadProtocol>

@property (retain, nonatomic) AWEInteractionPreloadReuseDeque *deque;
@property (nonatomic) long long expectedIndex;
@property (retain, nonatomic) AWEUITaskDelaySpreadExecutor *spreadExecutor;
@property (retain, nonatomic) NSMutableArray *spreadTaskArray;
@property (retain, nonatomic) NSMutableArray *insertSpreadTaskArray;
@property (retain, nonatomic) AWEAwemePageContext *feedPageContext;
@property (nonatomic) long long maxPreloadCount;
@property (nonatomic) BOOL ifSkipSpreadSpiltSetData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)suspendedSpreadTask;
- (void)resumeSpreadTask;
- (void)resetInteractionPreloadReuseDeque;
- (void)backupResetReuseDequeV2;
- (BOOL)ifPreloadWithModel:(id)a0;
- (BOOL)checkDequeCurrentIndexWithItemID:(id)a0 andIndexInFeed:(id)a1;
- (void)configCurrentIndexWithDirection:(id)a0;
- (void)configExpectedIndexWithDirection:(id)a0;
- (id)preloadDownInteractionWithModel:(id)a0;
- (id)preloadUpInteractionWithModel:(id)a0;
- (BOOL)checkFinishedWithGroupID:(id)a0;
- (id)findPreloadModelInDeque:(id)a0;
- (id)createUpPreloadInteractionWithModel:(id)a0;
- (id)createDownPreloadInteractionWithModel:(id)a0;
- (void)backupResetReuseDeque;
- (id)checkIfPreloadedWithItemID:(id)a0 andIndexInFeed:(id)a1;
- (id)createPreloadModelWithModel:(id)a0;
- (id)firstBackupModel;
- (void)cancelWithGroupID:(id)a0;
- (id)interactionVCWithModel:(id)a0;
- (void)addSpreadTask:(id /* block */)a0;
- (void)flushWithGroupID:(id)a0;
- (id)dequeForDebug;
- (void)addInsertSpreadTask:(id /* block */)a0;
- (void)insertSpreadTasksWithGroupID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
