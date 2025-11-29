@class UIImageView, UILabel;

@interface MMFinderLiveClockCountdownView : UIView

@property (retain, nonatomic) UIImageView *clockImageView;
@property (retain, nonatomic) UILabel *timeLabel;

- (id)init;
- (id)initWithFixedHeight:(double)a0 font:(id)a1;
- (void)initViewsWithFixedHeight:(double)a0 font:(id)a1;
- (void)updateWithRemainTimeInSeconds:(unsigned long long)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
