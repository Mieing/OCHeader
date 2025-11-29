@class NSMutableDictionary, MMLiveRewardGiftNewCustomizationMagicEngineResLogic;

@interface MMLiveRewardGiftNewCustomizationMagicRewardResManager : NSObject <WeChat.IMRCodeUpdateExt, WeChat.IMRServiceListener>

@property (retain, nonatomic) NSMutableDictionary *taskDict;
@property (retain, nonatomic) MMLiveRewardGiftNewCustomizationMagicEngineResLogic *engineResLogic;
@property (readonly, nonatomic) BOOL checkByMagicBrush;
@property (nonatomic) BOOL hasResourceTaskChecking;

- (id)init;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)addListener;
- (void)removeListener;
- (unsigned long long)getCacheResourceState:(id)a0;
- (BOOL)isCacheResourceStateSupported:(id)a0;
- (void)checkMagicRewardResourceState:(id)a0;
- (void)checkMagicRewardResourceState:(id)a0 callback:(id /* block */)a1 maxWaitTime:(double)a2 useCacheStateIfSupport:(BOOL)a3;
- (void)resetAllTasks;
- (BOOL)isCurrentHasResourceTaskChecking;
- (void)innerCheckMagicRewardResourceState:(id)a0 callback:(id /* block */)a1 maxWaitTime:(double)a2 useCacheStateIfSupport:(BOOL)a3;
- (void)updateResourceTasksCheckingState;
- (BOOL)getCurrentResourceTasksCheckingState;
- (void)loadMagicEngineResource:(id)a0;
- (void)checkMagicEngineCodeResource:(id)a0;
- (unsigned long long)transferMagicEngineResErrorLoadResultToCheckResult:(unsigned long long)a0;
- (void)prepareMagicEngineResource:(id)a0;
- (unsigned long long)transferPrepareResourceResultToCheckResult:(long long)a0;
- (unsigned long long)transferPrepareResourceResultToState:(long long)a0;
- (id)createCheckTaskWithResource:(id)a0;
- (void)updateMagicEngineResTagWithCheckTask:(id)a0;
- (void)addCheckTask:(id)a0 withKey:(id)a1;
- (id)getCheckTaskWithKey:(id)a0;
- (id)getCheckTaskList;
- (void)checkAllTaskMagicRewardResourceState;
- (id)getCheckTaskWithGiftName:(id)a0;
- (void)onCodeUpdateSuccess:(id)a0;
- (void)onCodeUpdateFail:(long long)a0;
- (void)onEnvPrepared;
- (void)onEnvDestroyed;
- (void)onEnvResUpdatedWithGiftName:(id)a0;
- (void)onEnvErrorWithErrType:(long long)a0 errMsg:(id)a1;
- (void).cxx_destruct;

@end
