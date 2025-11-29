@class AWEPaymentBadgeView, AWELandscapePageContext, UIImageView, LOTAnimationView, UILabel, UIView, AWEAwemeModel;

@interface AWELandscapeSplitTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UIImageView *digIcon;
@property (retain, nonatomic) UILabel *digLabel;
@property (retain, nonatomic) UILabel *signLabel;
@property (retain, nonatomic) UIView *videoInfoContainerView;
@property (retain, nonatomic) UIImageView *albumIcon;
@property (retain, nonatomic) UILabel *albumLabel;
@property (retain, nonatomic) UIView *playingContainerView;
@property (retain, nonatomic) LOTAnimationView *playingAnimationView;
@property (retain, nonatomic) UILabel *playingLabel;
@property (nonatomic) BOOL isPortraitVideo;
@property (retain, nonatomic) UIImageView *picoVRTagView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) unsigned long long cellType;
@property (retain, nonatomic) AWELandscapePageContext *context;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;

+ (double)cellHeight;

- (void)updateSelectedStatus:(BOOL)a0;
- (void)updateWithAwemeModel:(id)a0 context:(id)a1 cellType:(unsigned long long)a2 renderBlock:(id /* block */)a3;
- (void)updateTitleLabelWithSelected:(BOOL)a0;
- (void)trackRenderCellCoverWithCellType:(unsigned long long)a0 model:(id)a1 success:(BOOL)a2;
- (void)updateAccessibilityContent;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)setupUI;

@end
