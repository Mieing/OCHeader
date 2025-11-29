@class AWEAdAttitudeFilterWordModel, UILabel;

@interface AWELongPressAdFeedbackCell : UICollectionViewCell

@property (retain, nonatomic) AWEAdAttitudeFilterWordModel *filterWordModel;
@property (retain, nonatomic) UILabel *dislikeLabel;

- (void)configNormalStyle;
- (void)configSelectedStyle;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
