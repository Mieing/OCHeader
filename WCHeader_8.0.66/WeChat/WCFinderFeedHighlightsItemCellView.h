@class WCFinderFeedHighlightItem, UIImageView, PAGView, UILabel, UIView;

@interface WCFinderFeedHighlightsItemCellView : UITableViewCell

@property (retain, nonatomic) WCFinderFeedHighlightItem *highlightItem;
@property (nonatomic) BOOL isItemSelected;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) PAGView *playingPagView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIView *verticalLineView;

+ (id)ReuseIdentifier;
+ (double)calculateHeightForText:(id)a0 tableViewWidth:(double)a1;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configCellWithItem:(id)a0 isItemSelected:(BOOL)a1;
- (void)configUI;
- (void)layoutUI;
- (id)generateTitleText;
- (void).cxx_destruct;

@end
