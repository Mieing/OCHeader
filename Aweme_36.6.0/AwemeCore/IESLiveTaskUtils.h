@class NSMutableDictionary, NSDictionary, IESLiveTaskScheduler, NSString;

@interface IESLiveTaskUtils : NSObject <IESLiveTaskUtilsService, IESLiveTaskExcuted>

@property (retain, nonatomic) IESLiveTaskScheduler *scheduler;
@property (nonatomic) BOOL taskQueueEnabe;
@property (copy, nonatomic) NSDictionary *taskConfig;
@property (retain, nonatomic) NSMutableDictionary *taskDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)accessLiveTaskQueueWithBootLevel:(long long)a0 component:(id)a1 stage:(id)a2 task:(id /* block */)a3;
+ (void)accessLiveTaskQueueWithBootLevel:(long long)a0 stage:(id)a1 task:(id /* block */)a2;
+ (id)shareInstance;

- (void)setUpWithRoomType:(long long)a0;
- (void)excutedTaskWithName:(id)a0 identifier:(id)a1;
- (void)addTask:(id /* block */)a0 name:(id)a1 identifer:(id)a2 priority:(long long)a3;
- (void).cxx_destruct;
- (void)clearTasks;

@end
