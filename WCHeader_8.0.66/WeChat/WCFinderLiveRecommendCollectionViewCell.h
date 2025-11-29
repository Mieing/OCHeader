@class WCFinderDiscoveryNearbyLiveCollectionViewCell, WCFinderLiveCompleteElementModel;
@protocol WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate;

@interface WCFinderLiveRecommendCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderDiscoveryNearbyLiveCollectionViewCell *recommendItemView;
@property (weak, nonatomic) id<WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate> delegate;
@property (retain, nonatomic) WCFinderLiveCompleteElementModel *elementModel;
@property (copy, nonatomic) id /* block */ onTap;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTapItem:(id)a0;
- (void)playWithSound:(BOOL)a0;
- (void)stop;
- (void)layoutSubviews;
- (void)updateCellWithItem:(id)a0 delegate:(id)a1 styleInfo:(id)a2 openAudienceNewLiveRecomend:(BOOL)a3;
- (void).cxx_destruct;

@end
