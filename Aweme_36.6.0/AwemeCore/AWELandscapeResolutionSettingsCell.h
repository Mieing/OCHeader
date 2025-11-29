@class UILabel;

@interface AWELandscapeResolutionSettingsCell : UITableViewCell

@property (retain, nonatomic) UILabel *descLabel;

+ (id)identifier;

- (void)updateSelectedStatus:(BOOL)a0;
- (void)updateWithManualGearType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
