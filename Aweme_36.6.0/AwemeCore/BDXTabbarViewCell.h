@class VernierView;

@interface BDXTabbarViewCell : UICollectionViewCell

@property (nonatomic) long long tabid;
@property (retain, nonatomic) VernierView *associatedVernierView;

- (double)getCenterX;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (double)getWidth;

@end
