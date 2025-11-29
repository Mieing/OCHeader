@class NSString;

@interface BDASplashCommonTwistModel : NSObject <BDASplashMotionDelegate>

@property (copy, nonatomic) id /* block */ successBlock;
@property (nonatomic) double keyAngleX;
@property (nonatomic) double keyAngleY;
@property (nonatomic) double keyAngleZ;
@property (nonatomic) long long isBidirection;
@property (nonatomic) double deltaAngleX;
@property (nonatomic) double deltaAngleY;
@property (nonatomic) double deltaAngleZ;
@property (nonatomic) BOOL isStartDetect;
@property (nonatomic) long long lastDirection;
@property (nonatomic) BOOL motionValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)twistStart;
- (void)twistStop;
- (id)initWithTwistInfo:(id)a0 successBlock:(id /* block */)a1;
- (void)clearAngle;
- (BOOL)checkDirection;
- (void)updateWithDeviceMotion:(id)a0;
- (BOOL)getMotionIsInactive;
- (void).cxx_destruct;
- (void)dealloc;

@end
