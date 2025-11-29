@class AWEFeedLLMRecommendSurveyView;

@interface AWEFeedGeneralLLMRecommendSurveyCellViewController : AWEFeedGeneralCellViewController

@property (retain, nonatomic) AWEFeedLLMRecommendSurveyView *surveyView;
@property (nonatomic) BOOL isDraggingProgressSlider;
@property (nonatomic) BOOL isFastSpeedLongPressing;
@property (nonatomic) BOOL hasCheckedFrequency;
@property (copy, nonatomic) id /* block */ progressTouchBeginHandler;
@property (copy, nonatomic) id /* block */ progressTouchEndHandler;
@property (copy, nonatomic) id /* block */ longPressHandler;
@property (nonatomic) BOOL isFirstShowSurvey;
@property (nonatomic) BOOL hasShownSurvey;
@property (nonatomic) BOOL hasFilledSurvey;
@property (nonatomic) long long surveyShowStatus;
@property (nonatomic) double showSurveyTimestamp;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)didEndDisplayingBeforeReset;
- (void)pinch_updateOutContainerWithPureModeVC:(id)a0;
- (void)outer_pinchTransitionDidFinish;
- (void)handleAppWillResignActiveNotification:(id)a0;
- (BOOL)rootViewTapGestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)resetSurveyView;
- (void)addSurveyViewWithModel:(id)a0;
- (void)addInteractNotifications;
- (BOOL)shouldShowSurveyWithCurrentPlayTime:(double)a0 totalTime:(double)a1;
- (void)showSurveyWithAnimation:(BOOL)a0 currentPlayTime:(double)a1 totalTime:(double)a2;
- (void)trackSurveyShowTime;
- (void)dismissSurveyWithAnimation:(BOOL)a0 needTrackShowTime:(BOOL)a1;
- (void)performAnimationWithDuration:(double)a0 delay:(double)a1 timingFunction:(id)a2 animationBlock:(id /* block */)a3;
- (void)trackShowSurveyEventWithCurrentPlayTime:(double)a0 totalTime:(double)a1;
- (double)surveyShowStartTimeWithTotalTime:(double)a0;
- (id)optionTitleKeywordForTrack;
- (void)trackShowEventForSurveyWithCurrentPlayTime:(double)a0 totalTime:(double)a1;
- (void)trackShowEventForFrequency;
- (long long)durationSinceShowTimestampForTrack;
- (void)trackClickEventForSurveyWithClickDuration:(double)a0 keyword:(id)a1;
- (void)trackClickEventForFrequency;
- (id)commonParamsForSurvey;
- (id)commonParamsForFrequency;
- (void)trackClickEventWithClickPosition:(id)a0 keyword:(id)a1;
- (void)closeSurveyButtonTapped;
- (void)optionCellTappedWithIndexPath:(id)a0 isSelected:(BOOL)a1;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)pageDidDisappear:(BOOL)a0;

@end
