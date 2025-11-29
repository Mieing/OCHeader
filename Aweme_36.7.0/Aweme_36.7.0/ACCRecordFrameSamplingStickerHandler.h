@interface ACCRecordFrameSamplingStickerHandler : ACCRecordFrameSamplingBaseHandler

@property (copy, nonatomic) id /* block */ saveStickerImageAction;

- (BOOL)shouldHandle:(id)a0;
- (void)onEffectMessageReceived:(id)a0;
- (void)saveBgPhotosForTakePicture;
- (BOOL)needAfterProcess;
- (void)prepareToSampleFrame;
- (void)samplingCompleted;
- (void)exportAssertImageCompleted;
- (void)p_saveStickerImages;
- (void).cxx_destruct;

@end
