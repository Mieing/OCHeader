@class IESLiveRTChorusNetCellularFrequency, HTSEventContext, IESLiveRTChorusNetCellularSetting;

@interface IESLiveCellularEnhanceManager : NSObject

@property (retain, nonatomic) IESLiveRTChorusNetCellularSetting *setting;
@property (retain, nonatomic) IESLiveRTChorusNetCellularFrequency *frequency;
@property (nonatomic) long long txQualityCount;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (BOOL)isCellularEnhanceEnable;
- (void)showCellEnhanceView;
- (BOOL)enableCellularEnhance:(BOOL)a0 needAutoUpdateKvStore:(BOOL)a1;
- (void)showAlertIfNeededWithQuality:(id)a0;
- (BOOL)cellularFeatureEnable;
- (BOOL)hasCellEnhanceFeature;
- (void).cxx_destruct;

@end
