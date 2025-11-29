@class UILabel, AWEPlayVideoAbstractTimeComponent;

@interface AWEPlayVideoAbstractCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLable;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWEPlayVideoAbstractTimeComponent *timeBackView;

+ (id)identifier;

- (void)configUI;
- (void)updateWithContent:(id)a0 jumpTime:(id)a1 title:(id)a2;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
