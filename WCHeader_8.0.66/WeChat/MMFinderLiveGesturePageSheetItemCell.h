@class UIImageView, UILabel;

@interface MMFinderLiveGesturePageSheetItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *thumbnailView;
@property (retain, nonatomic) UILabel *nameLabel;

+ (id)reuseId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithGesture:(id)a0 enabled:(BOOL)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
