@class UILabel, MMWebImageView;

@interface MMFinderLiveFansGroupAnchorEditInfoCell : MMFinderLiveFansGroupAnchorEditTableCellBase

@property (retain, nonatomic) UILabel *lineLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMWebImageView *webImageView;
@property (nonatomic) unsigned long long layoutStyle;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initUI;
- (void)layoutSubviews;
- (void)configWithTitle:(id)a0 desc:(id)a1 imgUrl:(id)a2 image:(id)a3;
- (id)getTitle;
- (void).cxx_destruct;

@end
