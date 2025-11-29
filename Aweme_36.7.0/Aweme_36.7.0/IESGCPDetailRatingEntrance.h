@class UIColor, UILabel, MASConstraint, UITapGestureRecognizer;
@protocol IESGCPDetailRatingEntranceDelegate;

@interface IESGCPDetailRatingEntrance : UIView

@property (retain, nonatomic) UILabel *pointLabel;
@property (retain, nonatomic) UILabel *commentCountLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) MASConstraint *pointLabelTopConstraint;
@property (retain, nonatomic) UIColor *pointColor;
@property (retain, nonatomic) UIColor *commentCountColor;
@property (weak, nonatomic) id<IESGCPDetailRatingEntranceDelegate> delegate;

- (void)updatePoint:(double)a0 commentCount:(unsigned long long)a1;
- (void)updateToUnShownPoint;
- (void)tapGesAction:(id)a0;
- (void)updateNewEntranceWithShowPoint:(BOOL)a0 evaluatePoint:(double)a1 showCount:(BOOL)a2 commentCount:(unsigned long long)a3;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
