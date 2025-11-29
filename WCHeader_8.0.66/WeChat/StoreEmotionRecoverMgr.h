@class StoreEmotionDownloadLogicObject, NSMutableDictionary, NSString, StoreEmotionRecoverLogicObject, NSMutableArray, StoreEmotionFetchFollowedDesignersUpdateLogic;

@interface StoreEmotionRecoverMgr : MMUserService <StoreEmotionRecoverLogicObjectDelegate, StoreEmotionDownloadLogicObjectDelegate, IMsgExt, StoreEmotionAddTaskDelegate, StoreEmotionDeleteTaskDelegate, CNetworkStatusExt, StoreEmotionFetchFollowedDesignersUpdateLogicDelegate, MMServiceProtocol>

@property (retain, nonatomic) StoreEmotionRecoverLogicObject *recoverLogic;
@property (retain, nonatomic) StoreEmotionDownloadLogicObject *downloadLogic;
@property (retain, nonatomic) StoreEmotionFetchFollowedDesignersUpdateLogic *fetchDesignersLogic;
@property (retain, nonatomic) NSMutableArray *xmlTaskArray;
@property (retain, nonatomic) NSMutableDictionary *serverDic;
@property (nonatomic) unsigned int wwanAutoDownloadThreshold;
@property (nonatomic) int scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startDownloadMyPanelListFromScene:(int)a0;
- (id)downloadingInfo;
- (float)downloadingProgressFromItem:(id)a0;
- (int)getStateByItem:(id)a0;
- (BOOL)isRecovering;
- (void)startInternalRequest;
- (void)recoverStoreEmotionFromServerPids:(id)a0;
- (void)recoverHighPrivillegeWithPid:(id)a0;
- (void)fetchAllFollowedDesignersUpdateFromSvrPids:(id)a0;
- (BOOL)canStartCgiNow;
- (id)getStoreEmotionList;
- (void)runNotifyTask;
- (void)onStoreEmotionRecoverLogicOKWithServerPids:(id)a0;
- (void)onStoreEmotionRecoverLogicFailed;
- (void)onStoreEmotionDownloadLogicObjectOK;
- (void)onStoreEmotionDownloadLogicObjectFailed;
- (void)onFetchAllFollowedDesignersUpdateFinish;
- (BOOL)canResumeAddTask;
- (void)startAddLogicWithPid:(id)a0;
- (BOOL)canResumeDeleteTask;
- (void)onDeleteTaskComplete;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)ReachabilityChange:(unsigned int)a0;
- (void)tryResumeDownloadLogic;
- (unsigned int)storeEmoticonWWANAutoSyncLimit;
- (void).cxx_destruct;

@end
