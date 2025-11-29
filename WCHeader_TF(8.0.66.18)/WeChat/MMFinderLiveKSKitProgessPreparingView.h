@class PAGView, NSString;

@interface MMFinderLiveKSKitProgessPreparingView : UIView <PAGViewListener>

@property (nonatomic) BOOL isStartPrepare;
@property (nonatomic) BOOL isPrepareEnd;
@property (nonatomic) int maxPrepareMs;
@property (nonatomic) int remainMs;
@property (retain, nonatomic) PAGView *preparePAGView;
@property (nonatomic) long long prepareAnimDuration;
@property (retain, nonatomic) PAGView *countDownPAGView;
@property (nonatomic) long long countDownAnimDuration;
@property (copy, nonatomic) id /* block */ prepareEndCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)createPreparePagView;
- (void)createCountDownPagView;
- (double)preferHeight;
- (void)startPrepare;
- (void)notifyPrepareEnd;
- (void)updateMaxPreparingMs:(int)a0;
- (void)updatePreparingRemainMs:(int)a0;
- (void)reset;
- (BOOL)tryStartAnimation;
- (BOOL)tryStartPrepareAnimation;
- (BOOL)tryStartCountDownAnimation;
- (void)stopAnimations;
- (void)stopPrepare;
- (void)manualStopIfNeed:(BOOL)a0;
- (void)willMoveToWindow:(id)a0;
- (void)onAnimationEnd:(id)a0;
- (void).cxx_destruct;

@end
