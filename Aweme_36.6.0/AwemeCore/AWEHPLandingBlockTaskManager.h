@class NSMutableArray;

@interface AWEHPLandingBlockTaskManager : NSObject <AWEHPLandingBlockTaskManagerProtocol>

@property (nonatomic) BOOL hasSetup;
@property (retain, nonatomic) NSMutableArray *blockTaskList;

+ (Class)aAWELaunchLandingBlockTaskManagerDOUYINLiteAdapterClass;
+ (id)sharedInstance;

- (void)trySetup;
- (void)p_loopTaskList:(id)a0 index:(long long)a1 context:(id)a2 completion:(id /* block */)a3;
- (id)aAWELaunchLandingBlockTaskManagerDOUYINLiteAdapter;
- (void)executeBlockTasksWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)registerTask:(id)a0;
- (void)setup;

@end
