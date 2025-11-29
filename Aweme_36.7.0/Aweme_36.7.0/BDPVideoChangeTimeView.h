@class UILabel;

@interface BDPVideoChangeTimeView : UIView

@property (retain, nonatomic) UILabel *timeLabel;
@property (nonatomic) BOOL direction;
@property (nonatomic) double currentTime;
@property (nonatomic) double totalTime;

- (id)timeTransferToStr:(double)a0;
- (void)afterUpdateMeta;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
