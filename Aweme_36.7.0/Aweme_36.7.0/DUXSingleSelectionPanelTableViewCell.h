@class UIImage, NSString, UIImageView, DUXDivider, UILabel, DUXRadioBox, NSURL;

@interface DUXSingleSelectionPanelTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) DUXRadioBox *radioBox;
@property (retain, nonatomic) DUXDivider *divider;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSURL *iconURL;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL showDivider;

- (void)setIconURL:(id)a0 icon:(id)a1 enlargeType:(unsigned long long)a2 maxScale:(double)a3;
- (void)updateRadioBoxWithEnlargeType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)setupUI;

@end
