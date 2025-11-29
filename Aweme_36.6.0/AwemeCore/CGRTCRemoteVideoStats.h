@interface CGRTCRemoteVideoStats : NSObject

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) float videoLossRate;
@property (nonatomic) float receivedKbitrate;
@property (nonatomic) long long receivedFrameRate;
@property (nonatomic) long long decoderOutputFrameRate;
@property (nonatomic) long long rendererOutputFrameRate;
@property (nonatomic) long long stallCount;
@property (nonatomic) long long stallDuration;
@property (nonatomic) long long e2eDelay;
@property (nonatomic) BOOL isScreen;
@property (nonatomic) long long statsInterval;
@property (nonatomic) long long rtt;
@property (nonatomic) long long frozenRate;
@property (nonatomic) long long codecType;
@property (nonatomic) long long videoIndex;
@property (nonatomic) long long jitter;

@end
