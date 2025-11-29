@class BDPMorePanelItem, UIButton, UILabel;
@protocol AWEMorePanelCellDelegate;

@interface AWEMorePanelCell : UICollectionViewCell

@property (retain, nonatomic) BDPMorePanelItem *item;
@property (retain, nonatomic) UIButton *itemButton;
@property (retain, nonatomic) UILabel *textLabel;
@property (weak, nonatomic) id<AWEMorePanelCellDelegate> delegate;

- (void)reuseWithItem:(id)a0;
- (void)onItemButtonTap:(id)a0;
- (id)convertName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
