@class UIImageView, UILabel, UIView, WCFinderLocationSelectItem;

@interface WCFinderLocationSelectItemCell : UITableViewCell

@property (retain, nonatomic) UILabel *poiNameLabel;
@property (retain, nonatomic) UILabel *poiAddressLabel;
@property (retain, nonatomic) UILabel *selectOtherPOILabel;
@property (retain, nonatomic) UIImageView *selectedIcon;
@property (retain, nonatomic) UIView *seperatorLine;
@property (nonatomic) struct CGSize { double width; double height; } layoutSize;
@property (retain, nonatomic) WCFinderLocationSelectItem *item;

+ (double)defaultHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;
- (void)updateWithLocationSelectItem:(id)a0 selected:(BOOL)a1;
- (void).cxx_destruct;

@end
