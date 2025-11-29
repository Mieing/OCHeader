@class AWELuckyCatPendantSpeedInfoModel, NSString, AWELuckyCatPendant, NSNumber;

@interface AWELuckyCatPlayletTaskModel : AWELiteBaseApiModel

@property (nonatomic) BOOL isOpenMiniSeries;
@property (retain, nonatomic) NSNumber *longVideoLimitTime;
@property (copy, nonatomic) NSString *playletToken;
@property (retain, nonatomic) AWELuckyCatPendant *pendant;
@property (retain, nonatomic) AWELuckyCatPendant *enhancePendant;
@property (nonatomic) long long enhanceManualAmount;
@property (nonatomic) long long enhanceReadTaskDuration;
@property (nonatomic) long long hiddenStatus;
@property (nonatomic) BOOL isPlayletBlackBoxNode;
@property (nonatomic) BOOL needPlayGuideLottie;
@property (retain, nonatomic) AWELuckyCatPendantSpeedInfoModel *pendantSpeedInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
