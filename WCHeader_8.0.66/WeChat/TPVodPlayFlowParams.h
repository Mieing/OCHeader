@interface TPVodPlayFlowParams : NSObject

@property (nonatomic) unsigned long long tpSetdataSourcetimeMs;
@property (nonatomic) unsigned long long convertDataSourceEtimeMs;
@property (nonatomic) unsigned long long tpPrepareTimeMs;
@property (nonatomic) unsigned long long coreApiPrepareTimeMs;
@property (nonatomic) unsigned long long coreSchedulingThreadPrepareTimeMs;
@property (nonatomic) unsigned long long demuxerThreadPrepareTimeMs;
@property (nonatomic) unsigned long long demuxerOpenFileStimeMs;
@property (nonatomic) unsigned long long demuxerOpenFileEtimeMs;
@property (nonatomic) unsigned long long initFirstClipPositionEtimeMs;
@property (nonatomic) unsigned long long firstVideoPacketReadEtimeMs;
@property (nonatomic) unsigned long long firstAudioPacketReadEtimeMs;
@property (nonatomic) unsigned long long demuxerThreadOnPreparedTimeMs;
@property (nonatomic) unsigned long long coreSchedulingThreadOnPreparedTimeMs;
@property (nonatomic) unsigned long long tpOnPreparedTimeMs;
@property (nonatomic) unsigned long long videoDecoderOpenedTimeMs;
@property (nonatomic) unsigned long long firstVideoFrameRenderEtimeMs;
@property (nonatomic) unsigned long long audioDecoderOpenedTimeMs;
@property (nonatomic) unsigned long long firstAudioFrameRenderEtimeMs;
@property (nonatomic) unsigned long long datatransportCreateTaskTimeMs;
@property (nonatomic) unsigned long long datatransportSetClipInfoTimeMs;
@property (nonatomic) unsigned long long datatransportGetClipUrlTimeMs;
@property (nonatomic) unsigned long long datatransportM3u8RequestTimeMs;
@property (nonatomic) unsigned long long datatransportM3u8ResponseTimeMs;
@property (nonatomic) unsigned long long datatransportdataRequestTimeMs;
@property (nonatomic) unsigned long long datatransportDataResponsetimeMs;
@property (nonatomic) unsigned long long datatransportDataEnoughTimeMs;
@property (nonatomic) long long maxStreamBitrateKbps;
@property (nonatomic) long long avgStreamBitrateKbps;
@property (nonatomic) long long minStreamBitrateKbps;
@property (nonatomic) long long maxVideoDecodeCostTimeMs;
@property (nonatomic) long long avgVideoDecodeCostTimeMs;
@property (nonatomic) long long minVideoDecodeCostTimeMs;
@property (nonatomic) long long videoDecodeFrameTotalCount;
@property (nonatomic) long long videoRenderFrameTotalCount;

- (id)init;

@end
