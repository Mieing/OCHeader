@class UILabel, AWESettingSectionModel;

@interface AWESettingsTableSectionHeaderView : UITableViewHeaderFooterView

@property (nonatomic) BOOL useCardUIStyle;
@property (retain, nonatomic) AWESettingSectionModel *sectionModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL shouldShowSeperationLine;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)disableUserInteraction;

@end
