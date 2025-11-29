@class UILabel, UIView;

@interface IESLiveSoloKTVSingPieceSlider : UIView

@property (nonatomic) long long type;
@property (nonatomic) struct CGSize { double width; double height; } rectSize;
@property (retain, nonatomic) UIView *rectView;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIView *labelLine;
@property (nonatomic) long long secondInt;
@property (nonatomic) long long scaleRatio;

- (void)updateTime:(double)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)updateTitle:(id)a0;

@end
