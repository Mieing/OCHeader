@class WCFinderCarouselView;
@protocol WCFinderCarouselDatasource, WCFinderCarouseDelegate;

@interface WCFinderProfilePlaylistBigCardCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderCarouselView *carouselView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (weak, nonatomic) id<WCFinderCarouselDatasource> datasource;
@property (weak, nonatomic) id<WCFinderCarouseDelegate> delegate;

+ (id)dequeCell:(id)a0 fromView:(id)a1;
+ (double)displayHeightWithWidth:(double)a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;

- (void)setTag:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
