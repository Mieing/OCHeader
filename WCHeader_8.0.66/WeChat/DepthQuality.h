@interface DepthQuality : NSObject

@property (nonatomic) float depthScore;
@property (nonatomic) BOOL isPass;
@property (nonatomic) float ep_thr;
@property (nonatomic) float np_thr;
@property (nonatomic) float mp_thr;
@property (nonatomic) float shake_thr;
@property (nonatomic) float replaceScore;

@end
