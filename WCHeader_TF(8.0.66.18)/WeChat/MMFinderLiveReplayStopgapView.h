@class UIView, NSString, MMFinderLiveWcPlayerView, UIImageView, MMFinderLiveTaskId, MMFinderLiveReplayStopgapPlayerViewModel, UILabel, MMTimer;
@protocol MMFinderLiveReplayStopgapViewDelegate;

@interface MMFinderLiveReplayStopgapView : UIView <MMFinderLiveWcPlayerViewModelDelegate>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) unsigned long long countdownValue;
@property (retain, nonatomic) MMTimer *countdownTimer;
@property (retain, nonatomic) MMFinderLiveReplayStopgapPlayerViewModel *playerViewModel;
@property (retain, nonatomic) MMFinderLiveWcPlayerView *playerView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UIView *fadeTransitionView;
@property (retain, nonatomic) UIView *titleContainerView;
@property (retain, nonatomic) UIImageView *liveBrandIconView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *subtitleView;
@property (retain, nonatomic) UIView *countdownContainerView;
@property (retain, nonatomic) UILabel *countdownLabel;
@property (retain, nonatomic) UILabel *countdownDescriptionLabel;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (weak, nonatomic) id<MMFinderLiveReplayStopgapViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(id)a1;
- (void)start;
- (void)beginCompletion;
- (void)layoutSubviews;
- (void)onMinimizeWindowAttachLiveView:(id)a0;
- (void)onMinimizeWindowDismissLiveView:(id)a0;
- (void)onLiveWcPlayerVideoSizeChange:(id)a0 videoSize:(struct CGSize { double x0; double x1; })a1;
- (void)countdownTick;
- (void)beginCompletionTransition;
- (void).cxx_destruct;

@end
