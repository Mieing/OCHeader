@class UILabel, RichTextView, UIView;

@interface WCFinderLandScapeCollectionCell : UICollectionViewCell

@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) RichTextView *titleTextView;
@property (retain, nonatomic) UILabel *playingMaskLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)_layoutUI;
- (void)updateWithContentVM:(id)a0 isWatching:(BOOL)a1;
- (void).cxx_destruct;

@end
