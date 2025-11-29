@class NSString, NSMutableDictionary, MMLiveTaskId, MMFinderLiveGiftPlayItem, MMFinderLiveGiftAttackRewardPlayContext;

@interface MMFinderLiveGiftAttackPlayTask : NSObject

@property (retain, nonatomic) MMFinderLiveGiftPlayItem *playItem;
@property (nonatomic) int identifierNum;
@property (retain, nonatomic) NSString *taskKey;
@property (retain, nonatomic) MMLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSMutableDictionary *renderTaskDict;
@property (nonatomic) BOOL isPlayPending;
@property (nonatomic) BOOL isPlayStart;
@property (retain, nonatomic) MMFinderLiveGiftAttackRewardPlayContext *playContext;
@property (copy, nonatomic) id /* block */ timeoutCallback;
@property (copy, nonatomic) id /* block */ aniamtionCompletion;
@property (readonly, nonatomic) NSString *recipientUserName;
@property (copy, nonatomic) id /* block */ checkRenderTaskNeedRemoveScriptCallback;
@property (copy, nonatomic) id /* block */ getReusedRenderScriptCallback;
@property (copy, nonatomic) id /* block */ shareFaceEffectCallback;
@property (copy, nonatomic) id /* block */ faceEffectWillStartCallback;
@property (copy, nonatomic) id /* block */ faceEffectDidStartCallback;
@property (copy, nonatomic) id /* block */ getAppActiveStateCallback;
@property (copy, nonatomic) id /* block */ renderTaskWillStartCallback;
@property (copy, nonatomic) id /* block */ renderTaskDidFinishCallback;
@property (copy, nonatomic) id /* block */ addScriptSuccCallback;

- (id)initWithGiftPlayItem:(id)a0 liveTaskId:(id)a1 identifier:(int)a2;
- (void)initDefaultData;
- (void)createRenderTask;
- (id)createRenderTaskWithAttackUserName:(id)a0 attackItem:(id)a1;
- (void)startPending:(double)a0 timeoutCallback:(id /* block */)a1;
- (void)startAnimationWithContext:(id)a0 completion:(id /* block */)a1;
- (void)stopAnimation;
- (void)clearDirectly;
- (BOOL)processLuaScriptJsonMessage:(id)a0 fromSourceId:(int)a1;
- (BOOL)isExistRenderTaskForAttacker:(id)a0;
- (id)getReusableFaceEffectRenderEnableTaskWithAnimationId:(id)a0 forAttacker:(id)a1;
- (id)getPreviousFaceEffectRenderEnableTasksExceptAnimationId:(id)a0 forAttacker:(id)a1;
- (BOOL)isExistAnimationId:(id)a0;
- (BOOL)isCurrSupportPlayGiftAttack;
- (id)attackerUserNameList;
- (void)onPendingTimeout;
- (void)cancelPending;
- (void)startGiftAttackRender:(id)a0;
- (void)checkCurrAnimationResult;
- (long long)getCurrAnimationResult;
- (void)endWithResult:(long long)a0;
- (void)clearData;
- (id)tryGetResuedScriptForRenderTask:(id)a0;
- (void)onRenderTaskWillStart:(id)a0;
- (BOOL)isAppActive;
- (id)description;
- (void)registerRenderTask:(id)a0 withKey:(id)a1;
- (id)getAllRegisterRenderTasks;
- (id)getRegisterRenderTaskWithKey:(id)a0;
- (void).cxx_destruct;

@end
