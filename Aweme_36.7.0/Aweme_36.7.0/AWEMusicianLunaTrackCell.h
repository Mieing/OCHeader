@class UIStackView, AWEMusicFeedViewModel, UIImageView, UIView, UILabel, AWECollectionButton;

@interface AWEMusicianLunaTrackCell : UITableViewCell

@property (retain, nonatomic) UIView *accessibilityContainerView;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UIImageView *playView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *durationLabel;
@property (retain, nonatomic) AWECollectionButton *collectionBtn;
@property (nonatomic) BOOL isMixed;
@property (nonatomic) double topInset;
@property (retain, nonatomic) AWEMusicFeedViewModel *mediaModel;
@property (copy, nonatomic) id /* block */ collectionBtnClickBlock;

+ (id)timeString:(double)a0;
+ (id)timeAccessibilityString:(double)a0;
+ (double)logoH;
+ (double)playerH;
+ (double)collectionBtnH;
+ (double)recommendHeight;
+ (id)identifier;

- (void)configAccessibility;
- (void)p_setCollectionButtonAccessibilityLabel;
- (void)handleCollectStatusChangedNotification:(id)a0;
- (void)configWithMediaModel:(id)a0 isMixed:(BOOL)a1;
- (void)p_updateCollectCount:(long long)a0;
- (void)configWithCollectionSelected:(BOOL)a0;
- (void)collectionBtnClicked_IMP:(id)a0;
- (void)configWithCollectionSelected:(BOOL)a0 isFake:(BOOL)a1;
- (void)collectionBtnClicked:(id)a0;
- (void)configWithMediaModel:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
