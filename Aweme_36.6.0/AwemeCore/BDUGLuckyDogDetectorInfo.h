@class NSString, BDUGLuckyIosShakeConfig, BDUGLuckyDogDetectingMotionInfo;

@interface BDUGLuckyDogDetectorInfo : NSObject

@property (copy, nonatomic) NSString *bussinessId;
@property (nonatomic) long long shakeType;
@property (retain, nonatomic) BDUGLuckyIosShakeConfig *config;
@property (retain, nonatomic) BDUGLuckyDogDetectingMotionInfo *currentDetectingInfo;
@property (copy, nonatomic) id /* block */ shakeSuccessBlock;

- (void).cxx_destruct;

@end
