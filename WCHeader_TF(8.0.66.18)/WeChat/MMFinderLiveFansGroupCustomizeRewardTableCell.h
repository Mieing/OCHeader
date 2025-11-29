@class UILabel, UIView;

@interface MMFinderLiveFansGroupCustomizeRewardTableCell : MMFinderLiveCustomizeRewardTableCellBase

@property (retain, nonatomic) UIView *fansGroupLabelBackgroundView;
@property (retain, nonatomic) UILabel *fansGroupLabelView;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateWithGiftItem:(id)a0;
- (void).cxx_destruct;

@end
