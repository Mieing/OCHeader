@interface TPVodEndParams : NSObject

@property (nonatomic) long long retentionDurationMs;
@property (nonatomic) long long errorCode;
@property (nonatomic) long long tSeekCount;
@property (nonatomic) long long tSeekBufferingCount;
@property (nonatomic) long long tSeekBufferingDurationMs;
@property (nonatomic) long long tSecondBufferingCount;
@property (nonatomic) long long tSecondBufferingDurationMs;
@property (nonatomic) long long videoDecoderType;
@property (nonatomic) long long audioDecoderType;
@property (nonatomic) long long demuxerType;
@property (nonatomic) long long videoRendererType;
@property (nonatomic) long long audioRendererType;

- (id)init;

@end
