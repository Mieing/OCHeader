@class NSThread, NSMutableDictionary;
@protocol wxNativeLogDelegate;

@interface NativeMgr : NSObject {
    NSMutableDictionary *_tasks;
    NSThread *mgr_thread;
}

@property (weak, nonatomic) id<wxNativeLogDelegate> delegate;

+ (id)shareInstance;

- (void)nativeLog:(int)a0 log:(const char *)a1 target:(long long)a2;
- (void).cxx_destruct;

@end
