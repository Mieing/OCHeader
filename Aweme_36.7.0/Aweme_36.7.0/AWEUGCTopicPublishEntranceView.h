@class UIImageView, UILabel, UIView;

@interface AWEUGCTopicPublishEntranceView : AWEUGCTopicPublishEntranceBaseView

@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UIImageView *editIcon;
@property (retain, nonatomic) UILabel *leftText;
@property (retain, nonatomic) UILabel *rightText;
@property (retain, nonatomic) UILabel *editText;
@property (retain, nonatomic) UIView *leftBgView;
@property (retain, nonatomic) UIView *rightBgView;
@property (retain, nonatomic) UIView *editBgView;
@property (nonatomic) long long viewType;

- (void)onShotClicked;
- (void)setupTheme;
- (void)setUpLayout;
- (void)updateViewType;
- (void)updateViewForDiscuss;
- (void)updateViewForShot;
- (void)onAlbumClicked;
- (void)onDiscussClicked;
- (void)setUpThemeForLight;
- (void)setUpThemeForDark;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
