@class UILabel, MMBadgeView, MMWebImageView;

@interface GameChatMessageCell : GCBaseCollectionViewCell

@property (retain, nonatomic) MMWebImageView *iconImgView;
@property (retain, nonatomic) UILabel *bottomLabel;
@property (retain, nonatomic) MMBadgeView *badgeView;

+ (double)dynamicCellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureWithCellModel:(id)a0;
- (void)layoutBadgeView;
- (void)updateBadgeView:(unsigned long long)a0 asSmallDot:(BOOL)a1;
- (void).cxx_destruct;

@end
