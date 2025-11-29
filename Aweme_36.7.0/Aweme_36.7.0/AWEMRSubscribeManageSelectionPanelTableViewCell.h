@class NSString, UIImageView, DUXDivider, UILabel, DUXRadioBox;

@interface AWEMRSubscribeManageSelectionPanelTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) DUXRadioBox *radioBox;
@property (retain, nonatomic) DUXDivider *divider;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) BOOL isImageSetup;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL checked;
@property (nonatomic) BOOL dividerHidden;

- (void)setupImageIfNeeded;
- (void)setImageURL:(id)a0 description:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void)setupUI;

@end
