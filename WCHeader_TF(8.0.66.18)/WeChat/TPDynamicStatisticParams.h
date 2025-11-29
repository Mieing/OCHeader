@interface TPDynamicStatisticParams : NSObject

@property (nonatomic) long long videoBufferedDurationMs;
@property (nonatomic) long long audioBufferedDurationMs;
@property (nonatomic) long long videoDecodeFrameCount;
@property (nonatomic) long long videoRenderFrameCount;
@property (nonatomic) long long minVideoDecodeCostTimeMs;
@property (nonatomic) long long avgVideoDecodeCostTimeMs;
@property (nonatomic) long long maxVideoDecodeCostTimeMs;
@property (nonatomic) long long minVideoStreamBitrateBitsPerSecond;
@property (nonatomic) long long avgVideoStreamBitrateBitsPerSecond;
@property (nonatomic) long long maxVideoStreamBitrateBitsPerSecond;
@property (nonatomic) long long minVideoGopSize;
@property (nonatomic) long long avgVideoGopSize;
@property (nonatomic) long long maxVideoGopSize;

@end
