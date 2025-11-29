@class UILabel, UIImageView, IESLiveGuideDailyContentViewCellModel;

@interface IESLiveGuideDailyContentViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) IESLiveGuideDailyContentViewCellModel *cellModel;

- (void)updateIcon:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setProgress:(double)a0;
- (void)updateModel:(id)a0;

@end
