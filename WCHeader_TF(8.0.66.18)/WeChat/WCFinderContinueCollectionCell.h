@class WCFinderCollectionInfoView;

@interface WCFinderContinueCollectionCell : UITableViewCell

@property (retain, nonatomic) WCFinderCollectionInfoView *infoView;

+ (id)cellID;

- (void)prepareForReuse;
- (void)updateWatchingCollectionModel:(id)a0;
- (void)reportExposer;
- (void).cxx_destruct;

@end
