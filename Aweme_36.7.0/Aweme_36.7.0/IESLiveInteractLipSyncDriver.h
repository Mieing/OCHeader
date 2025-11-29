@protocol IESLiveInteractLipSyncDelegate;

@interface IESLiveInteractLipSyncDriver : NSObject {
    float *floatArray;
}

@property (nonatomic) void *nativeDriver;
@property (nonatomic) int blendShapeLength;
@property (weak, nonatomic) id<IESLiveInteractLipSyncDelegate> delegate;

- (void)createLipSyncDriver;
- (void)logEvent:(id)a0 logInfo:(id)a1;
- (int)processFeedAudioArray:(id)a0 audioFormat:(int)a1 sampleRate:(int)a2;
- (float *)outputLipSyncResultWithTime:(double)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;

@end
