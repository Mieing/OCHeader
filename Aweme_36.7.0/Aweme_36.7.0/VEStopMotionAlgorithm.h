@class VEVideoReaderUnit, VEStopMotionConfig, NSObject;
@protocol OS_dispatch_queue;

@interface VEStopMotionAlgorithm : IESMMObject {
    struct BachAlgorithmSystemWithDevice { void /* function */ **x0; } *system;
    int buffer_Width;
    int buffer_Height;
    char *algorithm_json;
    void *bach_finder;
}

@property (retain, nonatomic) VEStopMotionConfig *config;
@property (nonatomic) void /* function */ *resource_finder;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *algorithmQueue;
@property (retain, nonatomic) VEVideoReaderUnit *videoReaderUnit;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property (nonatomic) struct CGSize { double width; double height; } naturalSize;
@property (nonatomic) unsigned long long resourceRotationMode;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) BOOL isStoped;
@property (nonatomic) struct CGSize { double width; double height; } displaySize;
@property (nonatomic) double startStopMotion;

- (void)createResultPath;
- (BOOL)buildBachSystem;
- (BOOL)buildVideoDecoder:(id)a0;
- (void)startThread;
- (void)processTask;
- (BOOL)beginStopMotionWithStopMotionConfig:(id)a0 motionBlock:(id /* block */)a1;
- (BOOL)endStopMotion;
- (void).cxx_destruct;
- (void)releaseResource;
- (void)stopThread;

@end
