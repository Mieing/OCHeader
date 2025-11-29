@class IESLiveCountTimer, NSString;

@interface IESLiveRevenueInteractAudioHandler : NSObject <IESLiveMessageInteractionModuleMessageListAction>

@property (retain, nonatomic) IESLiveCountTimer *detectionWindowTimer;
@property (nonatomic) long long abnormalAudioChatMessageCount;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL hasActive;
@property (nonatomic) BOOL hasAudioAbnormalResolveReport;
@property (nonatomic) long long lastCallBackReason;
@property (nonatomic) long long lastCallBackDiagnosisLevel;
@property (nonatomic) long long lastShowReason;
@property (nonatomic) long long lastShowDiagnosisLevel;
@property (nonatomic) double lastShowToastTiming;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)frequencyControl;
- (void)sendChatMessage:(id)a0 user:(id)a1 eventTime:(long long)a2;
- (BOOL)enableAudioDiagnosis;
- (void)audioDiagnosisResult:(id)a0;
- (long long)abnormalAudioReviewCheckWindow;
- (BOOL)enableActiveAudioDiagnosis;
- (void)containsFuzzyHearingLoss:(id)a0;
- (long long)abnormalAudioReviewThreshold;
- (void)shouldStartActiveAudioDiagnosis;
- (void)audioDiagnosisMonitorWithName:(id)a0 extraParams:(id)a1;
- (BOOL)containsNoVolumeStr:(id)a0;
- (BOOL)containsLessVolumeStr:(id)a0;
- (BOOL)containsExcludeStr:(id)a0;
- (id)noVolumeStrList;
- (id)lowVolumeStrList;
- (id)excludeStrList;
- (long long)toastGapDuration;
- (long long)sameToastGapDuration;
- (void)showTipsWithResult:(id)a0 extraParams:(id)a1;
- (BOOL)enableShowExperienceReason;
- (BOOL)isLowBattery;
- (void).cxx_destruct;

@end
