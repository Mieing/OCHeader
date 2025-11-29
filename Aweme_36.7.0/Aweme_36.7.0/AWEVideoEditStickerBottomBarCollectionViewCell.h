@class UIImageView, UILabel;

@interface AWEVideoEditStickerBottomBarCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL userSelected;
@property (nonatomic) BOOL showTitle;

+ (struct CGSize { double x0; double x1; })cellSizeForTitle:(id)a0;
+ (id)titleFont;
+ (id)identifier;

- (void)updateWithIconURLs:(id)a0 title:(id)a1;
- (void)handleTouchBegan;
- (void)handleTouchFinished;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
