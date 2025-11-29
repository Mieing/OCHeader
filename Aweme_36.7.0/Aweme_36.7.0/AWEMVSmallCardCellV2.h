@class AWEMVChannelTapGuideView, NSString, AWEMVDislikeRevokableView, AWEMVChannelProgressView;

@interface AWEMVSmallCardCellV2 : AWEDCFeedBaseCell <AWEMVChannelSmallCardAutoPlayGuideAlertDeleagte, AWEMVChannelAlertInterceptorDelegate, AWEMVQualityTrackerProtocol>

@property (retain, nonatomic) AWEMVDislikeRevokableView *dislikeRevokableView;
@property (retain, nonatomic) AWEMVChannelTapGuideView *tapGuideView;
@property (retain, nonatomic) AWEMVChannelProgressView *progressView;
@property (nonatomic) double playBeginTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logScenePrefix;
+ (id)elementArray;

- (void)cellWillDisplay;
- (void)configWithModel:(id)a0 context:(id)a1;
- (void)cellDidEndDisplaying;
- (void)videoAutoPlay;
- (void)pageWillAppear;
- (BOOL)interceptorActionBeforeShowWithContext:(id)a0;
- (void)interceptorActionBeforeTriggerEventWithEvent:(id)a0;
- (void)showFeedbackMask;
- (void)dismissFeedbackMask;
- (void)pageWillDisappear;
- (void)screenWillRotate;
- (void)showMaskViewIfNeeded:(id)a0 completion:(id /* block */)a1;
- (void)bindEvents;
- (void)revokeFeedbackWithModel:(id)a0 feedbackInfo:(id)a1;
- (void)addFeedbackViews;
- (void)revokeButtonPressed:(id)a0;
- (id)mvPageContext;
- (void)seekToPlayTimeAfterShrink:(double)a0;
- (void)showTapGuide;
- (id)imageSceneForQualityTracker;
- (void)videoAutoPause;
- (void)removeTapGuideIfNeed;
- (void)addGTapGuideViewIfNeed;
- (void)showSurveyViewIfNeeded:(id)a0;
- (void)addTapGuideToAlertManager;
- (void).cxx_destruct;

@end
