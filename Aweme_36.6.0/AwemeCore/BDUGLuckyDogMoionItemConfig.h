@class BDMotionItemConfig, BDUGLuckyDogDetectorInfo, NSString;

@interface BDUGLuckyDogMoionItemConfig : NSObject <BDMotionItemConfigProtocol>

@property (retain, nonatomic) BDMotionItemConfig *itemConfig;
@property (retain, nonatomic) BDUGLuckyDogDetectorInfo *detectorInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)motionItemConfig;
- (BOOL)enableShake;
- (double)shakeTimeInterval;
- (unsigned long long)motionLevel;
- (void)didReceiveMotionAccelerometerData:(id)a0 error:(id)a1 from:(id)a2;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
