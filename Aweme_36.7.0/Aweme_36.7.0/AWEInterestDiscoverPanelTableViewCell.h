@class UIImageView, UILabel, UIView;

@interface AWEInterestDiscoverPanelTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *rightContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *diggIcon;
@property (retain, nonatomic) UILabel *playLabel;
@property (nonatomic) BOOL isLocatedCell;

- (id)contentViewBackgroundColor;
- (void)updateAwemeModel:(id)a0;
- (id)locatedContentViewBackgroundColor;
- (id)aythorLabelTextColor;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)titleLabelTextColor;

@end
