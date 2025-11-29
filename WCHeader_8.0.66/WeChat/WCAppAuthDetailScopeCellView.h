@class WCAppAuthScopeInfoItem, UIImageView, UIView, MMUILabel;

@interface WCAppAuthDetailScopeCellView : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) WCAppAuthScopeInfoItem *scopeItem;
@property (nonatomic) unsigned long long rowIndex;

+ (double)cellHeightForScopeItem:(id)a0 cellWidth:(double)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setScopeItem:(id)a0 isBottomCell:(BOOL)a1;
- (void)initSubviews;
- (void)layoutSubviews;
- (id)iconImageForScope:(id)a0;
- (void).cxx_destruct;

@end
