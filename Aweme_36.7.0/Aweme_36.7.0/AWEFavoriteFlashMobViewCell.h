@class UIButton, ACCTrendCollectModel, UIImageView, UIStackView, UILabel, UIView, YYLabel;
@protocol AWEFavoriteFlashMobViewCellDelegate;

@interface AWEFavoriteFlashMobViewCell : UITableViewCell

@property (retain, nonatomic) YYLabel *flashMobTitleLabel;
@property (retain, nonatomic) UILabel *flashMobAuthorLabel;
@property (retain, nonatomic) UILabel *flashMobFollowerLabel;
@property (retain, nonatomic) UILabel *flashMobInfoLabel;
@property (retain, nonatomic) UIButton *shootButton;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) ACCTrendCollectModel *stickerInfoModel;
@property (retain, nonatomic) UIStackView *flashMobStackView;
@property (retain, nonatomic) UIView *topContentView;
@property (retain, nonatomic) UIView *accessibilityContainerLeftView;
@property (retain, nonatomic) UIView *accessibilityContainerRightView;
@property (weak, nonatomic) id<AWEFavoriteFlashMobViewCellDelegate> delegate;

+ (id)reuseIdentifier;

- (void)shootButtonClicked;
- (BOOL)isNewProfileCollectLargeCharacterModeStatus;
- (BOOL)isNewProfileStyleStatus;
- (BOOL)isArrowStyleStatus;
- (BOOL)isShootSameStyleStatus;
- (void)setUpNewProfileUI;
- (void)setUpDefaultUI;
- (id)coverWithTrendCollectModel:(id)a0;
- (id)titleWithTrendCollectModel:(id)a0;
- (id)truncationTailForTitleLabelWithTrendCollectModel:(id)a0;
- (long long)countWithTrendCollectModel:(id)a0;
- (id)flashMobUrlWithMusicId:(long long)a0 flashMobId:(id)a1 flashMobText:(id)a2 effectId:(long long)a3 type:(long long)a4;
- (void)configCellWithCollectModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUpUI;

@end
