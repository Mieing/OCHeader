@class UILabel, UIImageView, IESLiveKTVOrderPanelKingItem;

@interface IESLiveKTVOrderPanelKingCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveKTVOrderPanelKingItem *item;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *iconImage;

- (void)renderWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
