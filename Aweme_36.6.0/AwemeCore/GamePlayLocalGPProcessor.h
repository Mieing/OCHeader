@class GamePlayLocalGPInfo, VEStopMotionAlgorithm, VECompileSession;

@interface GamePlayLocalGPProcessor : NSObject

@property (nonatomic) long long index;
@property (retain, nonatomic) GamePlayLocalGPInfo *gameplayInfo;
@property (nonatomic) BOOL hasFailed;
@property (nonatomic) BOOL canceledByUser;
@property (retain, nonatomic) VEStopMotionAlgorithm *stopmotionPrehandler;
@property (retain, nonatomic) VECompileSession *exporter;

- (void)p_stopmotionPrehandleWithCompletion:(id /* block */)a0;
- (void)cleanIntermediateFile;
- (void)p_exportResultWithCompletion:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })fixCanvasSize;
- (void)p_addSpeedCurvePointsToVEVideoData:(id)a0 ForAsset:(id)a1;
- (double)calculateAverageSpeedRatioWithXArr:(id)a0 yArr:(id)a1 duration:(long long)a2 spinCycleTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (id)initWithIndex:(long long)a0 GameplayInfo:(id)a1;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;
- (void)stop;

@end
