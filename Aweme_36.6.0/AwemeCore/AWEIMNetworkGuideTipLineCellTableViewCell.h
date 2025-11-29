@class UILabel;

@interface AWEIMNetworkGuideTipLineCellTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *contentLabel;

+ (double)horizontalPadding;

- (void)loadLine:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
