@class NSString, NSMutableDictionary;

@interface AWEUGFinishTaskManager : NSObject <AWEUserMessage, AWEUGFinishTaskManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *taskDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)setupObserver;
- (id)currentTaskForTaskType:(id)a0;
- (id)setForTaskType:(id)a0;
- (void)addTask:(id)a0;
- (void)removeTask:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
