@class MMUILabel;

@interface WCPlayerProgressTimeLabel : MMUIView

@property (retain, nonatomic) MMUILabel *currentTimeLabel;
@property (retain, nonatomic) MMUILabel *splitLabel;
@property (retain, nonatomic) MMUILabel *totalTimeLabel;

- (id)init;
- (void)initSubviews;
- (id)genTimeLabelFontOfSize:(double)a0;
- (void)updateTotalTime:(double)a0;
- (void)updateCurrentTime:(double)a0;
- (id)formatStrOfTime:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
