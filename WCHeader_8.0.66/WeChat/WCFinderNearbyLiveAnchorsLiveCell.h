@class WCFinderLiveIconImageView;

@interface WCFinderNearbyLiveAnchorsLiveCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderLiveIconImageView *iconImageView;
@property (copy, nonatomic) id /* block */ clickStartLiveBlock;

+ (double)cellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void)startLive;
- (void).cxx_destruct;

@end
