@class IESQueue;

@interface VESegmentFinder : NSObject

@property (retain, nonatomic) IESQueue *audioSegmentFinderQueue;

- (id)generateTempWavUrl:(id)a0;
- (void)calcSegmentStartTimeWavSync:(id)a0 originAudio:(id)a1 completeCallback:(id /* block */)a2;
- (void)calcSegmentStartTime:(id)a0 originAudio:(id)a1 completeCallback:(id /* block */)a2;
- (void)calcSegmentStartTimeWavAsync:(id)a0 originAudio:(id)a1 completeCallback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)doInit;

@end
