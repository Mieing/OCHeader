@class UIImageView, IESLiveGCDTimer, UILabel, IESLiveXPlayGameProgressView;

@interface IESLiveXPlayGameLoadingView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *gameIconView;
@property (retain, nonatomic) UILabel *gameNameLabel;
@property (nonatomic) double currentProgress;
@property (retain, nonatomic) IESLiveGCDTimer *autoIncrementTimer;
@property (retain, nonatomic) IESLiveXPlayGameProgressView *progressView;
@property (retain, nonatomic) UILabel *progressLabel;

- (void)updateGameIcon:(id)a0 gameName:(id)a1;
- (void)startProgressAutoIncrement;
- (void)stopProgressAutoIncrement;
- (void)_onProgressDidAutoIncreased;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupSubviews;
- (void)updateProgress:(double)a0;

@end
