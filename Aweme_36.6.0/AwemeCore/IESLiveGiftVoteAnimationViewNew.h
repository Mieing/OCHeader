@class CAGradientLayer, RACDisposable, UIImageView, IESLiveGiftVoteProgressView, UILabel, UIView, GetGiftVotesResponse_Vote;

@interface IESLiveGiftVoteAnimationViewNew : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *firstBgView;
@property (retain, nonatomic) CAGradientLayer *firstGradientLayer;
@property (retain, nonatomic) UIImageView *firstGiftImageView;
@property (retain, nonatomic) UILabel *firstGiftName;
@property (retain, nonatomic) UIView *secondBgView;
@property (retain, nonatomic) CAGradientLayer *secondGradientLayer;
@property (retain, nonatomic) UIImageView *secondGiftImageView;
@property (retain, nonatomic) UILabel *secondGiftName;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *centerGiftView;
@property (retain, nonatomic) UILabel *smallTimeLabel;
@property (retain, nonatomic) IESLiveGiftVoteProgressView *leftProgressView;
@property (retain, nonatomic) IESLiveGiftVoteProgressView *rightProgressView;
@property (nonatomic) long long leftCount;
@property (nonatomic) long long rightCount;
@property (retain, nonatomic) RACDisposable *timerDispose;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) GetGiftVotesResponse_Vote *voteInfo;
@property (copy, nonatomic) id /* block */ clickAction;

- (double)stayDuration;
- (void)p_setup;
- (void)p_updateUI;
- (void)p_didClickView;
- (void)showInView:(id)a0 targetFrame:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
