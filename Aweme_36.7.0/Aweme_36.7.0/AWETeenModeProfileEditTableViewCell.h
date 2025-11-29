@class UILabel, UIImageView, AWETeenModeProfileEditModel;

@interface AWETeenModeProfileEditTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWETeenModeProfileEditModel *model;

+ (double)titleLineSpacing;
+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateSubviews;

@end
