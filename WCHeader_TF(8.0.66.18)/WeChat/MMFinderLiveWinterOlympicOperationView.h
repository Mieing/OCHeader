@class MMFinderLiveActivityTask, MMFinderLiveOlympicsOperationViewModel, MMFinderLiveActivityTaskId;
@protocol MMFinderLiveWinterOlympicOperationViewDelegate;

@interface MMFinderLiveWinterOlympicOperationView : MMFinderLiveOperationView

@property (retain, nonatomic) MMFinderLiveOlympicsOperationViewModel *olympicsOperationViewModel;
@property (readonly, nonatomic) MMFinderLiveActivityTask *activityTask;
@property (readonly, nonatomic) MMFinderLiveActivityTaskId *activityTaskId;
@property (weak, nonatomic) id<MMFinderLiveWinterOlympicOperationViewDelegate> operationDelegate;

- (id)initWithTaskId:(id)a0 assumeAudienceCommentEnabled:(BOOL)a1;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)dealloc;
- (void)removeCertificateBackgroundAndParticipateAnimation;
- (void)layoutUI;
- (void)updateSyncActivityCommentResp:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutOnlineStateView;
- (void)createAndLayoutGameFrameSetViewsIfNeed;
- (void)createFollowConfirmIfNeeded;
- (void)createRewardGiftRecievingAnimationViewIfNeeded;
- (void)createRewardRecipientSelectionViewIfNeeded;
- (void)createSendingMoreBubbleViewIfNeeded;
- (void)layoutLotteryWidgets;
- (void)bindToViewModel:(id)a0;
- (void)startParticipateAnimation:(id)a0 backgroundFadeInDelay:(double)a1;
- (void)prepareForCertificateShowing;
- (void)prepareForCertificateHiding;
- (void).cxx_destruct;

@end
