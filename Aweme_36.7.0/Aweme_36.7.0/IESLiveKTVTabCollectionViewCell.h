@class UILabel;

@interface IESLiveKTVTabCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UILabel *unReadLabel;
@property (nonatomic) BOOL isSubTab;

- (void)updateContentWithScaleRatio:(long long)a0;
- (void)updateIsSubTab:(BOOL)a0 scaleRatio:(long long)a1;
- (void)resetColorWithSelectedState:(BOOL)a0 scaleRatio:(long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
