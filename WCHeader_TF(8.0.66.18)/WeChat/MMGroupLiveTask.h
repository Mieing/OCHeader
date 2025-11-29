@class NSString, MMGroupLiveCommentDataFetchEngine, MMGroupLiveInfoItem, MMLiveTaskId;

@interface MMGroupLiveTask : MMLiveTask

@property (retain, nonatomic) MMGroupLiveInfoItem *liveInfoItem;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) unsigned int anchorScene;
@property (nonatomic) unsigned int audienceScene;
@property (nonatomic) unsigned long long frontCameraMirrorMode;
@property (nonatomic) BOOL isFrontCameraMirrored;
@property (readonly, copy, nonatomic) NSString *roomId;
@property (readonly, nonatomic) MMGroupLiveCommentDataFetchEngine *groupCommentFetchEngine;

+ (id)createTaskWithReplaySysMsg:(id)a0 linkUrl:(id)a1;
+ (id)createTaskWithShareLiveMsg:(id)a0;
+ (id)createTaskWithGroupLiveInfoItem:(id)a0;

- (id)roomId;
- (id)initWithRoleType:(long long)a0 liveId:(unsigned long long)a1 roomId:(id)a2 andAnchorId:(id)a3;
- (void)updateLiveInfo:(id)a0;
- (id)createNewTaskId;
- (id)createNewCommentFetchEngine;
- (BOOL)isSameToTask:(id)a0;
- (BOOL)isLiveClosed;
- (unsigned int)liveStartTime;
- (id)anchorIdentityId;
- (BOOL)isOnlineStateButtonDisabled;
- (BOOL)resolveConflictsWithLiveTask:(id)a0 navigationController:(id)a1 maximizeLiveBlock:(id /* block */)a2 switchLiveBlock:(id /* block */)a3;
- (BOOL)resolveExternalConflicts;
- (id)conflictWording;
- (void)updateMainRemoteViewFillMode;
- (BOOL)isOverDisplaySize;
- (BOOL)canChangeAudioQuality;
- (void)initFrontCameraMirrorMode;
- (long long)getBeautySceneType;
- (void)initFaceBeautyParam;
- (void)initBeautyLogicWithBeautyPackage:(id)a0;
- (id)lastCameraModeCachedKey;
- (id)micMutedCachedKey;
- (id)pauseStatusCachedKey;
- (id)pauseTimeCachedKey;
- (void)handleRemoteSdkUserMediaDataAvailableChanged;
- (void).cxx_destruct;

@end
