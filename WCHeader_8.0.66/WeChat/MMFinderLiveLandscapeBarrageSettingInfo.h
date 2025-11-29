@class LiveLandscapeBarrageDisplaySettingInfo, MMLiveTaskId, MMFinderLiveLandscapeBarrageState;

@interface MMFinderLiveLandscapeBarrageSettingInfo : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) BOOL enableBarrageStyle;
@property (nonatomic) BOOL enableDisplayBarrageStyle;
@property (nonatomic) double barrageDisplayRange;
@property (nonatomic) double barrageDisplayAlpha;
@property (retain, nonatomic) MMFinderLiveLandscapeBarrageState *barrageState;
@property (retain, nonatomic) LiveLandscapeBarrageDisplaySettingInfo *displaySetting;

- (id)initWithTaskId:(id)a0;
- (void)updateEnableBarrageStyle:(BOOL)a0;
- (void)updateEnableDisplayBarrageStyle:(BOOL)a0;
- (void)updateBarrageDisplayRange:(double)a0;
- (void)updateBarrageDisplayAlpha:(double)a0;
- (int)getDisplayBarrageRangeReportTag;
- (int)getDisplayBarrageAlphaReportTag;
- (BOOL)checkDisplaySettingParamValid:(id)a0;
- (BOOL)checkEnableDisplaySettingParamValid:(id)a0;
- (void).cxx_destruct;

@end
