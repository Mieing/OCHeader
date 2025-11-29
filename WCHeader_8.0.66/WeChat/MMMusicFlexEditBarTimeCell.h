@class UILabel, UIView;

@interface MMMusicFlexEditBarTimeCell : UICollectionViewCell {
    UIView *_dotView;
}

@property (retain, nonatomic) UILabel *startTimeLabel;
@property (retain, nonatomic) UILabel *endTimeLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)layoutSubviews;
- (void)setStartTimeSec:(double)a0 endTimeSec:(double)a1;
- (void).cxx_destruct;

@end
