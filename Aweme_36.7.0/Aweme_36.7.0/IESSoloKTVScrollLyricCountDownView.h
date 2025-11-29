@class UIImage, UIImageView, IESLiveGCDTimer;

@interface IESSoloKTVScrollLyricCountDownView : HTSEventForwardingView

@property (retain, nonatomic) UIImage *redImage;
@property (retain, nonatomic) UIImage *whiteImage;
@property (retain, nonatomic) UIImageView *leftIV;
@property (retain, nonatomic) UIImageView *centerIV;
@property (retain, nonatomic) UIImageView *rightIV;
@property (copy, nonatomic) id /* block */ didEndBlock;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) int count;

- (void)startCountDown;
- (void)stopCountDown;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)freshWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)freshImageView:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setDidEndCallback:(id /* block */)a0;

@end
