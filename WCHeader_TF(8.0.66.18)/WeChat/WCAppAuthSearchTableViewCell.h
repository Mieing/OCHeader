@class WCAppAuthTableViewCellData, MMUILabel, UIView;

@interface WCAppAuthSearchTableViewCell : UITableViewCell

@property (retain, nonatomic) MMUILabel *appNameLabel;
@property (retain, nonatomic) MMUILabel *appTypeLabel;
@property (retain, nonatomic) UIView *appTypeBgView;
@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIView *highlightMaskView;
@property (retain, nonatomic) WCAppAuthTableViewCellData *cellData;

+ (double)cellHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initSubviews;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
