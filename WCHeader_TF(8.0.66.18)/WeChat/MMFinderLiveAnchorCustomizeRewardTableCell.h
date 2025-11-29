@class UILabel;

@interface MMFinderLiveAnchorCustomizeRewardTableCell : MMFinderLiveCustomizeRewardTableCellBase

@property (retain, nonatomic) UILabel *attachedTextLabel;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setCustomizeRewardItem:(id)a0;
- (void).cxx_destruct;

@end
