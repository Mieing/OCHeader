@class UILabel, NSCalendar;

@interface AWEProfileMenuVerticalMateFooter : UICollectionReusableView

@property (retain, nonatomic) UILabel *friendshipDateLabel;
@property (retain, nonatomic) NSCalendar *calendar;

+ (double)footerHeight;

- (void)setupCalendar;
- (id)replaceFormat:(id)a0 placeholder:(id)a1 withValue:(long long)a2;
- (void)configWithDate:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
