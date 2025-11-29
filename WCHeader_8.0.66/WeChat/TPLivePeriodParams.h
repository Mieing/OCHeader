@interface TPLivePeriodParams : NSObject

@property (nonatomic) long long bufferingDurationMs;
@property (nonatomic) long long bufferingCount;
@property (nonatomic) long long playedDurationMs;
@property (nonatomic) long long maxStreamBitrateKbps;
@property (nonatomic) long long avgStreamBitrateKbps;
@property (nonatomic) long long minStreamBitrateKbps;
@property (nonatomic) long long maxVideoDecodeCostTimeMs;
@property (nonatomic) long long avgVideoDecodeCostTimeMs;
@property (nonatomic) long long minVideoDecodeCostTimeMs;
@property (nonatomic) long long minVideoGopSize;
@property (nonatomic) long long avgVideoGopSize;
@property (nonatomic) long long maxVideoGopSize;
@property (nonatomic) long long videoDecodeFrameCount;
@property (nonatomic) long long videoRenderFrameCount;
@property (nonatomic) long long videoBufferedDurationMs;
@property (nonatomic) long long audioBufferedDurationMs;

- (id)init;

@end
