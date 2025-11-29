@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveSelfDisciplineFinishView : UIView

@property (retain, nonatomic) UIView *timeView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (nonatomic) double scale;
@property (retain, nonatomic) UIButton *timeButton;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (copy, nonatomic) NSString *selfDisciplineTime;
@property (nonatomic) BOOL didSuccess;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
