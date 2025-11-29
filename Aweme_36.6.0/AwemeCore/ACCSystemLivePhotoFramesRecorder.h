@class NSTimer;
@protocol VERecorderPublicProtocol;

@interface ACCSystemLivePhotoFramesRecorder : NSObject

@property (retain, nonatomic) NSTimer *recordFramesTimer;
@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) double startTime;
@property (copy, nonatomic) id /* block */ completion;

- (void)sampleFrame;
- (void)stopFrames;
- (void)startFramesWithCamera:(id)a0 completion:(id /* block */)a1;
- (void)prepareToSampleFrame;
- (void)firstSampling;
- (void)timedSampling;
- (void)stopTimer;
- (void).cxx_destruct;

@end
