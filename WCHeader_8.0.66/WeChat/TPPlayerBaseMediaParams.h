@class NSString;

@interface TPPlayerBaseMediaParams : NSObject

@property (copy, nonatomic) NSString *containerFormat;
@property (nonatomic) long long durationMs;
@property (nonatomic) long long hlsSourceType;
@property (nonatomic) long long demuxerType;
@property (nonatomic) long long videoWidth;
@property (nonatomic) long long videoHeight;
@property (nonatomic) long long videoEncodeFormat;
@property (nonatomic) long long videoStartStreamBitrateBps;
@property (nonatomic) float videoStartFrameRate;
@property (nonatomic) long long videoDecoderType;
@property (nonatomic) long long videoRendererType;
@property (nonatomic) long long audioEncodeFormat;
@property (nonatomic) long long audioDecoderType;
@property (nonatomic) long long audioRendererType;
@property (nonatomic) long long subtitleEncodeFormat;

- (id)init;
- (void).cxx_destruct;

@end
