@class CMMotionManager, CMAttitude;
@protocol IESLivePiperProtocol;

@interface IESLiveHybridCMMotionManager : NSObject

@property (nonatomic) long long time;
@property (retain, nonatomic) CMMotionManager *motionManager;
@property (weak, nonatomic) id<IESLivePiperProtocol> piper;
@property (copy, nonatomic) CMAttitude *initialAttitude;

+ (id)manager;

- (void)stopMotionManager;
- (void)startMotionManagerWithTimeGap:(long long)a0 piper:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;

@end
