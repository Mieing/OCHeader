@class UILabel, IESLiveImageView;

@interface IESLiveSelfDisciplinePanelTopicCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) IESLiveImageView *selectBackground;
@property (retain, nonatomic) IESLiveImageView *deselectBackground;

- (void)renderWithTitle:(id)a0;
- (void)didDeselect;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)didSelect;

@end
