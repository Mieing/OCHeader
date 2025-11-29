@class NSArray, NSDictionary;

@interface HTSBootConfiguration : NSObject

@property (retain, nonatomic) NSArray *foundationList;
@property (retain, nonatomic) NSArray *businessTaskList;
@property (retain, nonatomic) NSArray *backgroundList;
@property (retain, nonatomic) NSArray *firstForegroundList;
@property (retain, nonatomic) NSArray *afterLaunchNowList;
@property (retain, nonatomic) NSArray *afterLaunchIdleList;
@property (retain, nonatomic) NSArray *feedReadyNowList;
@property (retain, nonatomic) NSArray *feedReadyIdleList;
@property (retain, nonatomic) NSArray *willBackNormalList;
@property (retain, nonatomic) NSDictionary *originalConfig;
@property (copy, nonatomic) NSDictionary *signalTasksMap;

- (void)parseLaunchWithDic:(id)a0;
- (void)parseLaunchCompletionWithDic:(id)a0;
- (void)parseSignalTasksWithDic:(id)a0;
- (void)parseWillBackNormalWithDic:(id)a0;
- (void)adaptWithInterceptor:(id)a0;
- (void)adaptLaunchCompletionWithInterceptor:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
