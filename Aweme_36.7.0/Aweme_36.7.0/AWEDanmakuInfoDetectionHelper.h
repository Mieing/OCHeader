@interface AWEDanmakuInfoDetectionHelper : NSObject

+ (void)configTrackDebugBlockIfNeed;
+ (BOOL)checkPubDanmakuCountZero:(long long)a0 realDanmakuCount:(long long)a1 videoPlayPct:(double)a2 model:(id)a3 isLandScape:(BOOL)a4 hasTrackedDanmakuPlayResult:(BOOL)a5;
+ (void)danmakuInfoDetection:(id)a0 type:(long long)a1;
+ (void)updateDebugDanmakuHotAreaDisplay:(id)a0 container:(id)a1;
+ (void)danmakuCountInfoPreDetection:(id)a0;
+ (void)danmakuDataGetDetection:(id)a0 error:(id)a1;
+ (id /* block */)obtainTrackDebugBlock;
+ (void)danmakuCountInfoPostDetection:(id)a0 model:(id)a1 isLandScape:(BOOL)a2;

@end
