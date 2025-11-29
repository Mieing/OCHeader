@class UIButton, UILabel;

@interface IESSoloKTVScrollLyricIndicator : HTSEventForwardingView

@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UILabel *timeLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preFrame;
@property (nonatomic) double curTime;
@property (copy, nonatomic) id /* block */ didClickPlayButtonBlock;
@property (nonatomic) double startOffset;

- (void)updateTime:(double)a0;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)playButtonAction:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
