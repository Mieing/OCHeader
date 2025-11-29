@class NSString, NSMutableArray;

@interface IESIMAsyncTaskDispatcher : NSObject <IESIMUserServiceMessage>

@property (nonatomic) struct __CFRunLoopObserver { } *beginObserver;
@property (nonatomic) struct __CFRunLoopObserver { } *endObserver;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (nonatomic) BOOL isTracking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addTask:(id /* block */)a0;
+ (id)shared;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)p_addObserver;
- (void)p_removeObserver;
- (void)p_addTask:(id /* block */)a0;
- (void)p_executeTask;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
