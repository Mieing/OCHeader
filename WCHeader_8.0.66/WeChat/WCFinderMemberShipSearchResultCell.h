@class UIView, WCFinderDetailTimeStringConfig, UILabel, WCFinderFeedContentTextView, MMWebImageView;

@interface WCFinderMemberShipSearchResultCell : UITableViewCell

@property (retain, nonatomic) WCFinderFeedContentTextView *textView;
@property (retain, nonatomic) MMWebImageView *coverImgView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) WCFinderDetailTimeStringConfig *timeStringConfig;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *separatorView;

+ (double)getHorizontalPadding;

- (void)updateWithSearchInfo:(id)a0;
- (void).cxx_destruct;

@end
