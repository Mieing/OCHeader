@class NSOperationQueue, CMMotionManager, NSString;

@interface CGMotionManager : CGObject <CGCloudPlayerStatusUpdateMessage>

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) NSOperationQueue *motionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)stopPush;
- (void)startPush;
- (void)sendDeviceMotionCommand:(id)a0;
- (void)item:(id)a0 cloudPlayer:(id)a1 statusDidUpdated:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
