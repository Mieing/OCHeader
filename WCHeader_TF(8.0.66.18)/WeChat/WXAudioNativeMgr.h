@class NSThread, NSMutableDictionary;
@protocol wxAudioNativeLogDelegate;

@interface WXAudioNativeMgr : NSObject {
    NSMutableDictionary *_tasks;
    NSThread *mgr_thread;
}

@property (weak, nonatomic) id<wxAudioNativeLogDelegate> delegate;

+ (id)shareInstance;

- (void)wxaudionativeLog:(int)a0 log:(const char *)a1 target:(long long)a2;
- (void).cxx_destruct;

@end
