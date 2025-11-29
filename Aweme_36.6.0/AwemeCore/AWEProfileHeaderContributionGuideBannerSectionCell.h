@class AWEProfileHeaderContext, AWEProfileContributionGuideCollectionViewCell;
@protocol AWEProfileHeaderContributionGuideBannerSectionCellDelegate;

@interface AWEProfileHeaderContributionGuideBannerSectionCell : UICollectionViewCell

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) AWEProfileContributionGuideCollectionViewCell *cell;
@property (weak, nonatomic) id<AWEProfileHeaderContributionGuideBannerSectionCellDelegate> delegate;

- (void)hideCell;
- (void)configWithHeaderContext:(id)a0;
- (void)clearCell;
- (void)prepareContributionCell;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
