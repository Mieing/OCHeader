@class NSString, NSMutableArray;
@protocol IESLiveLaunchTaskProtocol;

@interface IESLiveLauncher : NSObject <IESLiveLauncherTasks>

@property (nonatomic) BOOL node_opt_immediately;
@property (retain, nonatomic) NSMutableArray<IESLiveLaunchTaskProtocol> *immediatelyLaunchTask;
@property (retain, nonatomic) NSMutableArray<IESLiveLaunchTaskProtocol> *scatterLaunchTask;
@property (retain, nonatomic) NSMutableArray<IESLiveLaunchTaskProtocol> *idleLaunchTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)immediatelyTasks;
- (id)idleTasks;
- (void)registerTask:(id)a0 taskType:(unsigned long long)a1;
- (id)scatterTasks;
- (void).cxx_destruct;
- (id)init;
- (void)start;

@end
