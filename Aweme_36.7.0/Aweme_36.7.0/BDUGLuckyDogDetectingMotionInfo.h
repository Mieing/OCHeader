@interface BDUGLuckyDogDetectingMotionInfo : BDUGLuckyJSONModel

@property (nonatomic) long long matchCount;
@property (nonatomic) long long remainSample;
@property (nonatomic) long long lastDirection;
@property (nonatomic) BOOL hasCallCallBackInOneCircle;

@end
