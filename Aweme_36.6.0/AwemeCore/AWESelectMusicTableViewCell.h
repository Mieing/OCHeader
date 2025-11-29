@class UIView, NSString, AWEBillboardLabel, AWECollectionButton, UIImageView, AWEMediaModel, LOTAnimationView, UILabel, UIColor;
@protocol MusicService;

@interface AWESelectMusicTableViewCell : UITableViewCell <AWEMusicServiceDelegate>

@property (class, readonly, nonatomic) double logoW;
@property (class, readonly, nonatomic) double logoH;
@property (class, readonly, nonatomic) double kPaddingT;

@property (retain, nonatomic) UIView *accessibilityContainerView;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UIImageView *playView;
@property (retain, nonatomic) LOTAnimationView *wavePlayView;
@property (retain, nonatomic) AWEBillboardLabel *nameLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) UILabel *videoLabel;
@property (retain, nonatomic) AWECollectionButton *collectionBtn;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) BOOL favorite;
@property (retain, nonatomic) id<MusicService> musicService;
@property (nonatomic) unsigned long long musicBillboardType;
@property (nonatomic) unsigned long long subtitleType;
@property (copy, nonatomic) id /* block */ titleClickBlock;
@property (copy, nonatomic) id /* block */ collectionBtnClickBlock;
@property (copy, nonatomic) id /* block */ arrowImageViewClickBlock;
@property (copy, nonatomic) id /* block */ rankViewClickBlock;
@property (copy, nonatomic) id /* block */ confirmBtnClickBlock;
@property (nonatomic) BOOL appear;
@property (retain, nonatomic) AWEMediaModel *mediaModel;
@property (nonatomic) long long playerStatus;
@property (retain, nonatomic) UIColor *titleColor;
@property (nonatomic) double topInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)recommendHeight;
+ (double)kItemW;
+ (double)kWaveW;
+ (id)_roundRectPath;
+ (double)kExtraH;
+ (double)kExtraW;
+ (id)identifier;
+ (id)_defaultImage;

- (void)musicService:(id)a0 playStatusChanged:(long long)a1;
- (void)confirmBtnClicked:(id)a0;
- (void)handleFavoriteStatusChangedNotification:(id)a0;
- (void)configWithMediaModel:(id)a0 isMixed:(BOOL)a1;
- (void)configWithCollectionSelected:(BOOL)a0;
- (void)collectionBtnClicked_IMP:(id)a0;
- (void)collectionBtnClicked:(id)a0;
- (void)configWithMediaModel:(id)a0;
- (id)initOSTTypeWithStyle:(long long)a0 reuseIdentifier:(id)a1 musicService:(id)a2;
- (void)configWithNewPlayerStatus:(long long)a0;
- (void)arrowImageViewClicked;
- (void)_setCollectionButtonAccessibilityLabel;
- (id)_decoratedImageFor:(id)a0 scale:(double)a1;
- (void)goToBillboardWithEID:(id)a0;
- (BOOL)needShowTime;
- (id)userCountFormatStringWithMediaModel:(id)a0;
- (void)configAccessibilityWithPlayStatus:(long long)a0;
- (void)resetRightButtonsFrame:(BOOL)a0;
- (void)resetLeftTitlesFrame;
- (BOOL)needShowVideoTag;
- (void).cxx_destruct;
- (void)_startAnimation;
- (void)layoutSubviews;
- (void)dealloc;
- (void)_stopAnimation;
- (void)setupUI;

@end
