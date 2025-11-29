@class IESECGCDTimer, NSString;

@interface AWEEGCDTimer : NSObject <AWEEGCDTimerProtocol>

@property (retain, nonatomic) IESECGCDTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTimeInterval:(double)a0 target:(id)a1 selector:(SEL)a2 userInfo:(id)a3 repeats:(BOOL)a4 dispatchQueue:(id)a5;
- (id)initWithTimeInterval:(double)a0 queue:(id)a1 repeats:(BOOL)a2 block:(id /* block */)a3;
- (void).cxx_destruct;
- (void)invalidate;
- (void)suspend;
- (void)schedule;
- (void)fire;

@end
