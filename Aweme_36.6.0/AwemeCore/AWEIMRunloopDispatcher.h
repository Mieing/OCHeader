@class NSString, NSMutableArray;

@interface AWEIMRunloopDispatcher : NSObject <IESIMUserServiceMessage>

@property (nonatomic) struct __CFRunLoopObserver { } *observer;
@property (nonatomic) struct __CFRunLoopObserver { } *beginObserver;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (nonatomic) BOOL isTracking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addTask:(id /* block */)a0;
+ (id)shared;

- (void)didFinishLoginWithUid:(id)a0;
- (void)p_addObserver;
- (void)p_removeObserver;
- (id)p_addTask:(id /* block */)a0;
- (struct __CFString { } *)p_runloopMode;
- (void)p_runloopDidCall;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
