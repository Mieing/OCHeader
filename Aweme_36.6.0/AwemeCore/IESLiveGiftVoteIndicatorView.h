@class RACDisposable, UIImageView, IESLiveGiftVoteProgressView, UILabel, UIView, NSArray;
@protocol IESLiveWebPPlayer;

@interface IESLiveGiftVoteIndicatorView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) RACDisposable *timerDisposable;
@property (retain, nonatomic) UIView *centerBgView;
@property (nonatomic) unsigned long long displayMode;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *advantageShowLabel;
@property (retain, nonatomic) UILabel *tempAnimationLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *numberImageView;
@property (retain, nonatomic) IESLiveGiftVoteProgressView *leftProgressView;
@property (retain, nonatomic) IESLiveGiftVoteProgressView *rightProgressView;
@property (retain, nonatomic) UIImageView *particleImageView;
@property (retain, nonatomic) UIView *scanGradientView;
@property (nonatomic) unsigned long long advanceType;
@property (nonatomic) BOOL hasFinished;
@property (nonatomic) BOOL isInEnterAnimation;
@property (copy, nonatomic) NSArray *advanceTextArray;
@property (copy, nonatomic) NSArray *resultTextArray;
@property (nonatomic) BOOL lastAdvLabelInFinish;

- (void)p_setup;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)startShowAnimation:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayMode:(unsigned long long)a1;
- (void)startTimerWithVote:(id)a0;
- (void)finishVote:(id)a0;
- (void)p_updateAdvantageLabelWithText:(id)a0 finished:(BOOL)a1;
- (void)p_updateVote:(id)a0 finished:(BOOL)a1;
- (void)p_startAdvanceChangeAnimationIfNeededWithLeftWidth:(double)a0 completion:(id /* block */)a1;
- (void)p_handleFinishWithVote:(id)a0 Type:(unsigned long long)a1;
- (void)p_updateVote:(id)a0;
- (id)p_getPreprocessText:(id)a0;
- (id)p_getReverseText:(id)a0;
- (void)p_updatelabel:(id)a0 withText:(id)a1 finished:(BOOL)a2;
- (void).cxx_destruct;
- (id)viewType;
- (void)dealloc;

@end
