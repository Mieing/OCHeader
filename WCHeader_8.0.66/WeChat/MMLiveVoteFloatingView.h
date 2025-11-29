@class MMUIImageView, NSString, MMFinderLiveTaskId, UIView, MMUILabel;

@interface MMLiveVoteFloatingView : MMUIView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMUIImageView *voteFloatingImage;
@property (retain, nonatomic) MMUILabel *tipLabel;
@property (nonatomic) BOOL hasFinished;
@property (nonatomic) BOOL isStaticStyle;
@property (retain, nonatomic) UIView *staticBGView;
@property (nonatomic) double tipLabelStaticHeight;
@property (nonatomic) BOOL disabledDisplay;
@property (nonatomic) BOOL layoutSubviewsAtCenter;
@property (retain, nonatomic) NSString *delayHideVotingId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(id)a1;
- (void)setHidden:(BOOL)a0;
- (void)startDisplayAnimate;
- (void)setFinished:(BOOL)a0;
- (void)setupViews;
- (void)layoutSubviews;
- (void)animateToStaticStyleWithCompletion:(id /* block */)a0;
- (void)animateToNormalStyle;
- (void).cxx_destruct;

@end
