@class CMMotionManager;
@protocol BDASplashMotionDelegate;

@interface BDASplashMotionManager : NSObject

@property (retain, nonatomic) CMMotionManager *manager;
@property (nonatomic) long long detectOptions;
@property (weak, nonatomic) id<BDASplashMotionDelegate> delegate;

+ (id)sharedInstance;

- (void)stopDetectMotionWithType:(unsigned long long)a0;
- (void)startDetectMotionWithType:(unsigned long long)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
