@class UIImageView, UILabel, UIColor;

@interface AWERelatedRecomendPanelListCell : UITableViewCell

@property (retain, nonatomic) UIImageView *videoCoverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *likeIcon;
@property (retain, nonatomic) UILabel *playLabel;
@property (retain, nonatomic) UIColor *titleLabelTextColor;
@property (retain, nonatomic) UIColor *contentViewBackgroundColor;
@property (retain, nonatomic) UIColor *locatedContentViewBackgroundColor;
@property (retain, nonatomic) UIColor *lineAttributesColor;

- (void)updateAwemeModel:(id)a0 selected:(BOOL)a1;
- (void)setConstDarkMode;
- (void)setContentBackgroundColor;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
