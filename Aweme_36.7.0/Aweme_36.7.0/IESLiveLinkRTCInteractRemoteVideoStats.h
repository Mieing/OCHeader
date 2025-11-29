@class NSString;

@interface IESLiveLinkRTCInteractRemoteVideoStats : NSObject

@property (copy, nonatomic) NSString *strUID;
@property (nonatomic) unsigned long long delay;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) float videoLossRate;
@property (nonatomic) float receivedKBitrate;
@property (nonatomic) long long receivedFrameRate;
@property (nonatomic) long long decoderOutputFrameRate;
@property (nonatomic) long long renderOutputFrameRate;
@property (nonatomic) long long stallCount;
@property (nonatomic) long long stallDuration;
@property (nonatomic) long long e2eDelay;
@property (nonatomic) BOOL isScreen;
@property (nonatomic) long long statsInterval;
@property (nonatomic) long long rtt;
@property (nonatomic) long long frozenRate;
@property (nonatomic) long long videoIndex;

- (void).cxx_destruct;

@end
