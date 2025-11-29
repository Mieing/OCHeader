@class UILabel;

@interface _IESECReviewsDetailTimeIndicator : UIView {
    UILabel *_durationLabel;
    UILabel *_divider;
    UILabel *_currentTimeLabel;
}

@property (nonatomic) long long duration;
@property (nonatomic) long long currentTime;

- (id)formatTimeFromMillisecond:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
