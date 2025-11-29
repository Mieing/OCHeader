@class UIColor, AWETaskModel, NSTimer, UIImageView, UILabel, UIImage;

@interface AWEMissionParticipationInfoView : UIView

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *alreadyInLabel;
@property (retain, nonatomic) UIImageView *lineImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIColor *lineImageColor;
@property (retain, nonatomic) UIImage *particImage;
@property (retain, nonatomic) AWETaskModel *mission;

- (void)updateWithMission:(id)a0;
- (void)_updateWithMission:(id)a0;
- (void)timerDidFired:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)willMoveToWindow:(id)a0;

@end
