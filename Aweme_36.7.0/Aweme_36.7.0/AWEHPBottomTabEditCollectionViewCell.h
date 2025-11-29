@class DUXBaseLabel, DUXRadioBox, DUXDivider;

@interface AWEHPBottomTabEditCollectionViewCell : UICollectionViewCell

@property (nonatomic) unsigned long long cornerType;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) DUXRadioBox *radio;
@property (retain, nonatomic) DUXDivider *divider;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL isLast;

- (void)updatePanelThemeStyle:(long long)a0;
- (void)p_updateCorners;
- (void)updateWithItem:(id)a0 cornerType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
