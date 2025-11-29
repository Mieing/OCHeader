@protocol HMDANRSDKMonitorDelegate;

@interface HMDANRSDKMonitor : NSObject

@property (readonly, nonatomic) double timeoutInterval;
@property (readonly, weak, nonatomic) id<HMDANRSDKMonitorDelegate> delegate;

+ (void)initialize;

- (id)initWithANRSDKMonitorDelegate:(id)a0 timeInterval:(double)a1;
- (void)addSelfElement;
- (void)removeSelfElement;
- (id)initWithANRSDKMonitorDelegate:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
