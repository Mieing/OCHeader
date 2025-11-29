@class NSData, NSMutableArray, VEAmazingEffectRenderer;

@interface VEStopMotionUtil : NSObject {
    void *stopMotionKeyBuffer;
}

@property (retain, nonatomic) NSData *SlamBuffer;
@property (retain, nonatomic) NSData *lastFrameBachBuffer;
@property (retain, nonatomic) NSMutableArray *stopMotionOrderedPts;
@property (nonatomic) long long stopMotionKeyPTS;
@property (retain, nonatomic) VEAmazingEffectRenderer *renderer;
@property (nonatomic) unsigned long long shadowCount;
@property (nonatomic) double allRenderCost;
@property (nonatomic) double readFileCost;
@property (nonatomic) double bufferSerialitionCost;

- (void)readSlamebufferNameFromPath:(id)a0;
- (id)initWithStopMotionResultPath:(id)a0 shadowCount:(unsigned long long)a1 withAmazingRender:(id)a2;
- (void)setStopMotionBufferForPts:(int)a0 stopMotionPath:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
