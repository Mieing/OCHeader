@protocol MMTCPHandleLogDelegate;

@interface MMTCPNativeMgr : NSObject

@property (weak, nonatomic) id<MMTCPHandleLogDelegate> delegate;

+ (id)shareInstance;

- (void)tcpNativeLog:(int)a0 log:(const char *)a1 target:(long long)a2;
- (void).cxx_destruct;

@end
