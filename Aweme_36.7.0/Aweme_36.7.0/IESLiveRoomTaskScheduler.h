@class NSMutableDictionary, IESLiveTaskScheduler, NSString, NSMutableArray;

@interface IESLiveRoomTaskScheduler : NSObject <IESLiveTaskExcuted>

@property (retain, nonatomic) IESLiveTaskScheduler *taskScheduler;
@property (retain, nonatomic) NSMutableDictionary *roomTaskMapper;
@property (retain, nonatomic) NSMutableDictionary *roomPendingTaskMapper;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (nonatomic) long long currentRoomStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)willEnterRoom;
- (void)componentMountDidFinishForLevel:(long long)a0;
- (void)playerFirstFrameDidRender;
- (void)removeAllRoomTask:(id)a0;
- (id)addRoomTask:(id /* block */)a0 token:(id)a1 room:(id)a2;
- (id)addGlobalTask:(id /* block */)a0 token:(id)a1;
- (id)addRoomTask:(id /* block */)a0 token:(id)a1 room:(id)a2 stage:(long long)a3;
- (void)excutedTaskWithName:(id)a0 identifier:(id)a1;
- (id)addTask:(id /* block */)a0 token:(id)a1 room:(id)a2 scope:(unsigned long long)a3 stage:(long long)a4;
- (void)removeTaskWithTokens:(id)a0;
- (void)triggerPendingTaskIfNeeded;
- (BOOL)executeTaskImmediately:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clean;
- (void)addTaskCompletionBlock:(id /* block */)a0;

@end
