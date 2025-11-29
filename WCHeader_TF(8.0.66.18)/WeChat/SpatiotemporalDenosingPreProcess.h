@class NSMutableArray;

@interface SpatiotemporalDenosingPreProcess : NSObject {
    char blockSize;
    int frameCnt;
    int frameStaticInterval;
    int motionFrameBufferCnt;
    float noiseLevel;
    float preNoiseLevel;
    BOOL isBackCamera;
    int stDenosingWidth;
    int stDenosingHeight;
    BOOL updateNoiseEstimateFlag;
    int noiseStaticCounter;
    char *blockBuffer;
    char *diffBuffer;
    NSMutableArray *motionLevelBank;
    NSMutableArray *frameVarianceSmoothness;
    int minSmoothness;
    unsigned long long coordinatesBlocksCurFrame[10];
    unsigned long long coordinatesBlocksPreFrame[10];
}

- (id)init:(BOOL)a0;
- (void)updateNoiseLevel:(float)a0;
- (int)calcutlateSmoothness:(char *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 centralIndex:(unsigned long long)a3;
- (id)formateDicWithName:(id)a0 smoothValue:(id)a1 varianceValue:(id)a2;
- (void)spatialNoiseEstimate:(char *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 colStart:(unsigned long long)a3 rowStart:(unsigned long long)a4 blockIndex:(unsigned long long)a5;
- (float)calculateNoiseLevel:(id)a0;
- (id)sortFrameVarianceSmoothness;
- (void)generateRandomCoordinates:(int)a0 height:(int)a1;
- (struct blockMotionPrams { float x0; int x1; float x2; float x3; int x4; })checkBlockMotion:(char *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 colStartCur:(unsigned long long)a3 rowStartCur:(unsigned long long)a4 colStartNext:(unsigned long long)a5 rowStartNext:(unsigned long long)a6 blockIndex:(unsigned long long *)a7 blockNum:(unsigned long long)a8;
- (char)quickMotionCheck:(struct __CVBuffer { } *)a0;
- (char)quickMotionCheck:(char *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (void)reset;
- (float)getMotionRatioThreshod:(float)a0 PixelMean:(float)a1;
- (float)getNoiseLevel;
- (void)dealloc;
- (void).cxx_destruct;

@end
