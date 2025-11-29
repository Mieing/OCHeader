@protocol TAVSourceSoftEncoderFactory;

@interface MAVExportOptionalParam : NSObject

@property (nonatomic, getter=isUseHevcEncode) BOOL useHevcEncode;
@property (nonatomic, getter=isUseHDREncode) BOOL useHDREncode;
@property (nonatomic, getter=isUseSoftHEVCEncode) BOOL useSoftHEVCEncode;
@property (nonatomic, getter=useSoftEncNewThreadsControl) BOOL useSoftEncNewThreadsControl;
@property (nonatomic, getter=vcodec2Preset) int vcodec2Preset;
@property (nonatomic, getter=crf) float crf;
@property (nonatomic, getter=vbvBufferSize) int vbvBufferSize;
@property (nonatomic, getter=enhancementMode) int enhancementMode;
@property (nonatomic) int bitrateUp;
@property (nonatomic) int bitrateDown;
@property (nonatomic, getter=isUseHDRToSDR) BOOL useHDRToSDR;
@property (retain, nonatomic) id<TAVSourceSoftEncoderFactory> encoderFactory;
@property (nonatomic) BOOL keepsProcessInBackground;

- (void).cxx_destruct;

@end
