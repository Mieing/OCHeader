@class WCFinderDetailTimeStringConfig, UILabel, MMWebImageView, UIView;

@interface WCFinderMemberShipCollectionTableViewCell : UITableViewCell

@property (retain, nonatomic) MMWebImageView *coverImgView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) WCFinderDetailTimeStringConfig *timeStringConfig;
@property (retain, nonatomic) UIView *topSeparatorLine;
@property (retain, nonatomic) UIView *bottomSeparatorLine;

- (void)updateWithCollectionInfo:(id)a0 isFirst:(BOOL)a1 isLast:(BOOL)a2;
- (void).cxx_destruct;

@end
