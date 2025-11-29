@class UILabel, UIImageView;

@interface ACCEditTagsPOISearchTypeTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *searchTypeLabel;
@property (nonatomic) BOOL isCurrentSearchType;
@property (retain, nonatomic) UIImageView *checkIcon;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithText:(id)a0;

@end
