@class UIImageView, UILabel;

@interface IESLiveUserCardGroupLiveCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) id item;

- (void)setupWithItem:(id)a0 uiConfig:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
