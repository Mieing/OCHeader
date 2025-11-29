@class UILabel, AWEAdAttitudeFilterWordModel, UIStackView;

@interface AWELongPressPanelAdsActionFeedbackCell : UICollectionViewCell

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) AWEAdAttitudeFilterWordModel *model;
@property (nonatomic) BOOL isPopoverCell;

- (void)configNormalStyle;
- (void)configSelectedStyle;
- (void)updatePopoverborder;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
