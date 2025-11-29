@class UILabel;

@interface AWEFansInteractionStickerCollectionViewCell : AWEBaseStickerCollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;

- (void)configCellWithIconName:(id)a0 Title:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
