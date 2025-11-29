@class NSSet, NSArray, TIMXSDKInstance, NSString;

@interface IESIMMsgDBRebuildManager : NSObject <TIMXPullerStatusChangeObserverDelegate, IESIMLoginManagerMessage, IESIMTIMXLifeMessage>

@property (weak) TIMXSDKInstance *sdkRoot;
@property (copy, nonatomic) id /* block */ rebuildCompleteBlock;
@property BOOL isRebuilding;
@property BOOL isPullingMessages;
@property (nonatomic) BOOL enableLiveConsult;
@property (copy, nonatomic) NSSet *errorCodeSet;
@property (nonatomic) BOOL useAsyncOpt;
@property (nonatomic) BOOL enableNonImportantDBSplit;
@property (nonatomic) BOOL isAutoReubild;
@property (copy, nonatomic) NSArray *rebuildErrorCode;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) BOOL lastTimeRebuildOver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)dbSize;
+ (BOOL)isDBUsable;
+ (void)startRebuildWithBlock:(id /* block */)a0;
+ (id)dbErrorCode;
+ (void)cancelPullingMessages;
+ (void)clearAllfailedRebuildConvs;
+ (void)clearAllLiveConsultFailedRebuildConvs;
+ (void)continueRebuildWithBlock:(id /* block */)a0;
+ (id)sharedInstance;

- (void)iesim_didFinishLogin;
- (void)iesim_didFinishLogout;
- (BOOL)isDBUsable;
- (void)startRebuildWithBlock:(id /* block */)a0;
- (void)cancelPullingMessages;
- (void)iesim_timxInstanceMounted:(id)a0;
- (void)iesim_timxInstanceUnmounted:(id)a0;
- (void)p_fillPropertyFromCurrentSDKIfNecessary;
- (id)p_storedSDKRoot;
- (void)p_clearPropertyOfSDK;
- (id)p_storedSDKRoot_Nullable;
- (void)didEndInstallInitForRebuildWithUserID:(long long)a0 inbox:(int)a1 pullerType:(long long)a2 error:(id)a3;
- (void)didEndPullForRebuildWithUserId:(long long)a0 inbox:(int)a1 error:(id)a2;
- (void)didEndPullConversationForRebuildWithUserId:(long long)a0 inbox:(int)a1 error:(id)a2;
- (void)didEndPullLiveConsultForRebuildWithUserId:(long long)a0 inbox:(int)a1 error:(id)a2;
- (void)databaseCorruptRebuildAuto:(id)a0;
- (BOOL)__hasInitOver;
- (BOOL)__hasInitSucess;
- (void)continueRebuildWithCompletionBlock:(id /* block */)a0;
- (void)p_aggrEndPullMixtureLinkWithInboxType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
