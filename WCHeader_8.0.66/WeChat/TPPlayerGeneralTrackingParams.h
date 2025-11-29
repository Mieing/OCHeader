@interface TPPlayerGeneralTrackingParams : NSObject

@property (nonatomic) long long apiPrepareTimeMs;
@property (nonatomic) long long playerSchedulingThreadPrepareStartTimeMs;
@property (nonatomic) long long demuxerThreadPrepareStartTimeMs;
@property (nonatomic) long long demuxerOpenFileStartTimeMs;
@property (nonatomic) long long demuxerOpenFileEndTimeMs;
@property (nonatomic) long long initFirstClipPositionEndTimeMs;
@property (nonatomic) long long firstVideoPacketReadEndTimeMs;
@property (nonatomic) long long firstAudioPacketReadEndTimeMs;
@property (nonatomic) long long demuxerThreadOnprepareCompleteTimeMs;
@property (nonatomic) long long playerSchedulingThreadOnpreparedTimeMs;
@property (nonatomic) long long videoDecoderOpenedTimeMs;
@property (nonatomic) long long firstVideoFrameRenderedTimeMs;
@property (nonatomic) long long audioDecoderOpenedTimeMs;
@property (nonatomic) long long firstAudioFrameRenderedTimeMs;

@end
