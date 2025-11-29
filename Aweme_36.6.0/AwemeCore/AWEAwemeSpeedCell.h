@class UILabel, AWEAwemeLongPressFunctionModel;

@interface AWEAwemeSpeedCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *speedTitleLabel;
@property (retain, nonatomic) AWEAwemeLongPressFunctionModel *model;
@property (nonatomic) BOOL selectedSpeed;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;

@end
