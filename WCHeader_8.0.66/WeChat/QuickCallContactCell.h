@class CContact, MMHeadImageView, MMUILabel;

@interface QuickCallContactCell : UICollectionViewCell

@property (retain, nonatomic) MMHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) CContact *contact;

+ (struct CGSize { double x0; double x1; })cellSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
