@interface ACCRecordFrameSamplingMusicAItHandler : ACCRecordFrameSamplingBaseHandler

- (BOOL)shouldHandle:(id)a0;
- (void)sampleFrame;
- (id)preprocessFrame:(id)a0;
- (void)firstSampling;
- (void)samplingCompleted;
- (void)addFrameIfNeed:(id)a0 atTime:(double)a1;

@end
