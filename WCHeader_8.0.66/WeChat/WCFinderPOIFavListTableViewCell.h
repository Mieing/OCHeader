@class WCFinderLBSCardContentView, NSString, WCFinderFavPoiItem;
@protocol WCFinderPOIFavListTableViewCellDelegate;

@interface WCFinderPOIFavListTableViewCell : UITableViewCell <WCFinderLBSCardContentViewDelegate>

@property (retain, nonatomic) WCFinderLBSCardContentView *lbsCard;
@property (nonatomic) double layoutWidth;
@property (retain, nonatomic) WCFinderFavPoiItem *favPOIItem;
@property (weak, nonatomic) id<WCFinderPOIFavListTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithStyle:(id)a0 width:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;
- (void)updateWithFavPOIItem:(id)a0;
- (void)lbsCardLayoutHeightChanged;
- (void)lbsCardDidClickCard;
- (void).cxx_destruct;

@end
