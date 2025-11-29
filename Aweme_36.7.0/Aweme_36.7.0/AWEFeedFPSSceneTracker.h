@class AWEPerfFPSMetric, AWEAwemeModel;

@interface AWEFeedFPSSceneTracker : NSObject {
    AWEAwemeModel *lastAweme;
    unsigned char lastSceneType;
    AWEPerfFPSMetric *fpsMetric;
}

+ (id)trackerWithMetric:(id)a0;

- (void)switchToAweme:(id)a0 pageExtension:(id)a1;
- (void)switchFromAweme:(id)a0 toAweme:(id)a1 up:(BOOL)a2 preloaded:(BOOL)a3;
- (BOOL)shouldMonitorDanmakuWithModel:(id)a0;
- (id)sceneNameWithAweme:(id)a0;
- (void)switchToAweme:(id)a0;
- (BOOL)shouldAddAdExtraInfoWith:(id)a0;
- (void)switchToAweme:(id)a0 pageType:(long long)a1;
- (void).cxx_destruct;

@end
