@class UILabel, UIView;

@interface AWELocationEditSectionHeader : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UILabel *sectionTitleLabel;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)a0;
- (void)setSeparatorHidden:(BOOL)a0;

@end
