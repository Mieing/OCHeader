@class UIColor, UILabel, MASConstraint, UITapGestureRecognizer;
@protocol IESGCPDetailRatingEntranceV4Delegate;

@interface IESGCPDetailRatingEntranceV4 : UIView

@property (retain, nonatomic) UILabel *pointLabel;
@property (retain, nonatomic) UILabel *unitLabel;
@property (retain, nonatomic) UILabel *commentCountLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) MASConstraint *commentLabelTopConstraint;
@property (nonatomic) long long themeType;
@property (nonatomic) double evaluatePoint;
@property (nonatomic) long long commentCount;
@property (retain, nonatomic) UIColor *pointColor;
@property (retain, nonatomic) UIColor *commentCountColor;
@property (weak, nonatomic) id<IESGCPDetailRatingEntranceV4Delegate> delegate;

- (void)tapGesAction:(id)a0;
- (void)updateWithRatingEntranceThemeType:(long long)a0 evaluatePoint:(double)a1 commentCount:(long long)a2;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
