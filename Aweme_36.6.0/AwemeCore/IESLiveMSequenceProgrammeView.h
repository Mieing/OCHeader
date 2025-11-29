@class IESLiveMSequenceAnchorInformationView, UIImageView, HTSLiveMSequenceStore, UIView, UILabel, NSTimer;

@interface IESLiveMSequenceProgrammeView : UIView

@property (retain, nonatomic) HTSLiveMSequenceStore *store;
@property (retain, nonatomic) UIView *programmeBackView;
@property (retain, nonatomic) UIImageView *programmeImageView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) NSTimer *timerCount;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) IESLiveMSequenceAnchorInformationView *anchorInformationView;
@property (retain, nonatomic) NSTimer *nextAnchorTimerCount;
@property (nonatomic) BOOL isLabelCountDown;
@property (retain, nonatomic) IESLiveMSequenceAnchorInformationView *nextAnchorView;
@property (retain, nonatomic) UILabel *officialLinkingView;

- (void)stopCountdownTimer;
- (void)setupAnchorView;
- (void)trackProgramme:(BOOL)a0;
- (void)updateContent:(id)a0 countDownTime:(long long)a1 countDownMsg:(id)a2;
- (void)followStatusDidChange;
- (void)setFollowButtonHighlighted:(BOOL)a0;
- (void)programmeViewTapped;
- (void)setupOfficialLinkingView;
- (double)backViewWidth:(id)a0 isShowNextAnchor:(BOOL)a1;
- (double)backViewWidth:(id)a0;
- (void)anchorViewEndAnimation:(double)a0;
- (void)startNextAnchorCountDown:(long long)a0 isMseqAudience:(BOOL)a1 completion:(id /* block */)a2;
- (void)startCountWithDuration:(long long)a0 countDownMsg:(id)a1 completion:(id /* block */)a2;
- (id)initWithStore:(id)a0 diContext:(id)a1;
- (void)startAnchorViewAnimation:(id)a0 duration:(long long)a1 isMseqAudience:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupViews;

@end
