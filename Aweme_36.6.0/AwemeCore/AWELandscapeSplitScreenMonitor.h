@interface AWELandscapeSplitScreenMonitor : NSObject

@property (nonatomic) double beginRenderTime;
@property (nonatomic) double beginRenderCellCoverTime;
@property (nonatomic) double beginEnterTime;
@property (nonatomic) BOOL shouldMonitor;

- (void)trackRenderPhase:(long long)a0 splitScreenMode:(long long)a1 success:(BOOL)a2;
- (void)reset;

@end
