@class UILabel, AWESettingSectionModel, UIView;

@interface AWESettingsTableSectionFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *footerNoticeLabel;
@property (nonatomic) BOOL shouldShowSeperationLine;
@property (retain, nonatomic) AWESettingSectionModel *sectionModel;

+ (double)footerHeightForSectionModel:(id)a0;
+ (id)identifier;

- (id)lineViewTextColor;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;

@end
