@class BDSCUISettingModel;

@interface BDSCViewModel : NSObject

@property (nonatomic) unsigned long long searchViewType;
@property (nonatomic) unsigned long long controlViewType;
@property (nonatomic) unsigned long long clarityViewType;
@property (nonatomic) unsigned long long floatBallType;
@property (nonatomic) unsigned long long airPlayMirrorGuideViewType;
@property (nonatomic) BOOL supportSeries;
@property (nonatomic) BOOL supportCharity;
@property (nonatomic) BOOL supportDanmaku;
@property (nonatomic) BOOL supportClarityLimit;
@property (nonatomic) BOOL supportLocalCast;
@property (nonatomic) BOOL showControlViewIgnoreCastingState;
@property (nonatomic) BOOL needUpdateControlViewCastingState;
@property (nonatomic) unsigned long long playStatus;
@property (nonatomic) unsigned long long castStatus;
@property (retain, nonatomic) BDSCUISettingModel *uiSettingsModel;

- (void).cxx_destruct;

@end
