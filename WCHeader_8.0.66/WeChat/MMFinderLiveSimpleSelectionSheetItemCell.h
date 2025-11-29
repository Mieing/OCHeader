@class MMUILabel, MMUIImageView;

@interface MMFinderLiveSimpleSelectionSheetItemCell : UITableViewCell

@property (retain, nonatomic) MMUILabel *detailTitleLabel;
@property (retain, nonatomic) MMUILabel *detailDescriptionLabel;
@property (retain, nonatomic) MMUIImageView *selectStatusImageView;

+ (double)cellHeightWithItem:(id)a0 maxWidth:(double)a1;
+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (void)configWithItem:(id)a0;
- (void)layoutSubviews;
- (void)setShowCheckmark:(BOOL)a0;
- (void).cxx_destruct;

@end
