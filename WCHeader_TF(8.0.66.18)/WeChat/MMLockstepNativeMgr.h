@class NSThread, NSMutableDictionary;
@protocol MMLockstepHandleLogDelegate;

@interface MMLockstepNativeMgr : NSObject {
    NSMutableDictionary *_tasks;
    NSThread *mgr_thread;
}

@property (weak, nonatomic) id<MMLockstepHandleLogDelegate> delegate;

+ (id)shareInstance;

- (void)lockstepNativeLog:(int)a0 log:(const char *)a1 target:(long long)a2;
- (void).cxx_destruct;

@end
