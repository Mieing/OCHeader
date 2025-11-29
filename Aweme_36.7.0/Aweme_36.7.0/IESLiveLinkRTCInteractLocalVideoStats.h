@interface IESLiveLinkRTCInteractLocalVideoStats : NSObject

@property (nonatomic) float sentKBitrate;
@property (nonatomic) long long inputFrameRate;
@property (nonatomic) long long sentFrameRate;
@property (nonatomic) long long encoderOutputFrameRate;
@property (nonatomic) long long rendererOutputFrameRate;
@property (nonatomic) long long sentTargetKBitrate;
@property (nonatomic) long long sentTargetFrameRate;
@property (nonatomic) long long statsInterval;
@property (nonatomic) float videoLossRate;
@property (nonatomic) long long rtt;
@property (nonatomic) long long encodedBitrate;
@property (nonatomic) long long encodedFrameWidth;
@property (nonatomic) long long encodedFrameHeight;
@property (nonatomic) long long encodedFrameCount;
@property (nonatomic) long long codecType;
@property (nonatomic) BOOL isScreen;

@end
