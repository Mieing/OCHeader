@protocol MMUDPHandleLogDelegate;

@interface MMUDPNativeMgr : NSObject

@property (weak, nonatomic) id<MMUDPHandleLogDelegate> delegate;

+ (id)shareInstance;

- (void)udpNativeLog:(int)a0 log:(const char *)a1 target:(long long)a2;
- (void).cxx_destruct;

@end
