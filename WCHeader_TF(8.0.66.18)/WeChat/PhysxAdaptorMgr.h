@protocol MMPHYSXLogDelegate;

@interface PhysxAdaptorMgr : NSObject

@property (weak, nonatomic) id<MMPHYSXLogDelegate> delegate;

+ (id)shareInstance;

- (void)mmphysxNativeLog:(int)a0 log:(const char *)a1 target:(long long)a2;
- (void).cxx_destruct;

@end
