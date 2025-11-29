@class UILabel, NSString;

@interface MMFinderLiveFansGroupAnchorEditTitleDetailCell : MMFinderLiveFansGroupAnchorEditTableCellBase

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *detail;

+ (id)reuseId;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
