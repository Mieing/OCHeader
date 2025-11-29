@class UILabel, UIButton;
@protocol IESLiveAnchorLivePauseCountDownViewDelegate;

@interface IESLiveAnchorLivePauseCountDownView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *countDownTitleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *resumeButton;
@property (weak, nonatomic) id<IESLiveAnchorLivePauseCountDownViewDelegate> delegate;
@property (nonatomic) double remains;

- (void)resumeButtonDidClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
