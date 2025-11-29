@class UIImageView, NSTimer, UILabel, UIView;

@interface IESLiveMSequenceAnchorProgrammeView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) UIView *programmeBackView;
@property (retain, nonatomic) UIImageView *programmeImageView;
@property (retain, nonatomic) UIView *backView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) NSTimer *timerCount;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (copy, nonatomic) id /* block */ action;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)updateContent:(id)a0 countDownTime:(long long)a1 countDownMsg:(id)a2;
- (double)backViewWidth:(id)a0;
- (void)startCountWithDuration:(long long)a0 countDownMsg:(id)a1 completion:(id /* block */)a2;
- (void)programmeViewTapped:(id)a0;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupViews;
- (void)updateContent:(id)a0;

@end
