@class IESMMTranscoderParam, NSURL, HTSVideoData, VEAudioEncodeConfig, AVMutableComposition, NSDictionary, AVAudioMix, AVVideoComposition;

@interface VETransData : NSObject

@property (nonatomic) BOOL needReencode;
@property (nonatomic) BOOL hasAudio;
@property (readonly, nonatomic) BOOL hasWatermark;
@property (nonatomic) unsigned long long decodePixelFormat;
@property (nonatomic) unsigned long long encodePixelFormat;
@property (retain, nonatomic) IESMMTranscoderParam *transParam;
@property (retain, nonatomic) VEAudioEncodeConfig *audioEncodeConfig;
@property (nonatomic) unsigned long long writeEncodeMode;
@property (retain, nonatomic) NSDictionary *videoOutputSetting;
@property (nonatomic) BOOL enableMultiTrack;
@property (nonatomic) int exportFps;
@property (nonatomic) BOOL enableOptExportFps;
@property (readonly, nonatomic) AVMutableComposition *srcAsset;
@property (readonly, copy, nonatomic) AVAudioMix *audioMix;
@property (readonly, copy, nonatomic) AVVideoComposition *videoComposition;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } totalDurationTime;
@property (nonatomic) double controlFramerate;
@property (retain, nonatomic) NSURL *outputUrl;
@property (retain, nonatomic) HTSVideoData *videoData;

- (id)initWithVideoData:(id)a0 needReencode:(BOOL)a1 usenewModule:(BOOL)a2 enableMultiTrack:(BOOL)a3 hasWatermark:(BOOL)a4 completionHandler:(id /* block */)a5 context:(id)a6;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
