@class AWEPaymentBadgeView, UIView, AWEMixVideoDetailRichAwemeTagView, UIFont, AWEAwemeModel, UIImageView, AWEMixDetailInformationCellWatchedView, DUXRadioBox, UILabel, UIColor;

@interface AWEMixDetailInformationTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *mixVideoCoverView;
@property (retain, nonatomic) UIView *rightContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *digIcon;
@property (retain, nonatomic) UILabel *playLabel;
@property (retain, nonatomic) UIImageView *poiIcon;
@property (retain, nonatomic) UILabel *poiLabel;
@property (retain, nonatomic) UIColor *titleLabelTextColor;
@property (retain, nonatomic) UIColor *contentViewBackgroundColor;
@property (retain, nonatomic) UIColor *locatedContentViewBackgroundColor;
@property (retain, nonatomic) UIColor *lineAttributesColor;
@property (nonatomic) BOOL isBGColorWhite;
@property (retain, nonatomic) AWEMixDetailInformationCellWatchedView *watchedView;
@property (retain, nonatomic) AWEMixVideoDetailRichAwemeTagView *richAwemeTagView;
@property (retain, nonatomic) UIImageView *picoVRTagView;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) DUXRadioBox *selectRadioBox;
@property (retain, nonatomic) UIImageView *cloudDownImageView;

- (void)updateAwemeModel:(id)a0;
- (void)setConstDarkMode;
- (void)setContentBackgroundColor;
- (void)setLightMode;
- (void)setPanelMode;
- (void)updateMediumPlayList;
- (void)setWatchedEnable:(BOOL)a0;
- (void)updateToCacheCellWithSelectState:(BOOL)a0;
- (void)updateOfflineMode;
- (void)updatePOIStyle:(id)a0;
- (void)setDefaultContentBackgroundColor;
- (id)getTitleWithAweme:(id)a0;
- (void)updateContentBackgroundColorWithLocatedColor:(id)a0 normalColor:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
