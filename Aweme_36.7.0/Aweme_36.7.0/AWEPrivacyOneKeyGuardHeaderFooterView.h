@class UILabel, AWESettingSectionModel;

@interface AWEPrivacyOneKeyGuardHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWESettingSectionModel *sectionModel;
@property (nonatomic) BOOL isFooter;

+ (id)identifier;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
