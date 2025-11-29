@class UIImageView, UILabel;

@interface WCFinderFeedListSwitchCellView : UITableViewCell

@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) unsigned long long arrowDirection;

+ (double)height;
+ (id)cellID;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)doLayoutSubviews;
- (void)sizeToFitWidth:(double)a0;
- (void)setupTitle:(id)a0 arrowDirection:(unsigned long long)a1;
- (void)updateTitle:(id)a0;
- (void).cxx_destruct;

@end
