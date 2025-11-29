@class UIStackView, UIImageView, AWENewFaceStickerModel, UILabel, UIView, UIButton;

@interface AWEFavoriteEffectsTableViewCell : UITableViewCell

@property (nonatomic) long long index;
@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *coverContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIImageView *shootImageView;
@property (retain, nonatomic) UIButton *shootButton;
@property (retain, nonatomic) UILabel *officialSymbolLabel;
@property (retain, nonatomic) UILabel *effectInfoLabel;
@property (retain, nonatomic) UIStackView *effectStackView;
@property (retain, nonatomic) UIStackView *effectOfficialStackView;
@property (retain, nonatomic) UIView *effectOfficialStackWhiteSpaceView;
@property (retain, nonatomic) AWENewFaceStickerModel *stickerModel;
@property (retain, nonatomic) UIView *customAccessibilityView;
@property (retain, nonatomic) UIView *customAccessibilityRightView;
@property (retain, nonatomic) UIView *topContentView;
@property (copy, nonatomic) id /* block */ enterEffectDetailBlock;
@property (copy, nonatomic) id /* block */ beginShootBlock;
@property (retain, nonatomic) UILabel *originalSymbolLabel;

+ (long long)contentButtonMargin;
+ (BOOL)shouldSetTitleMediumWeight;
+ (long long)leftMargin;
+ (id)identifier;
+ (double)cellHeight;

- (BOOL)isNewProfileCollectLargeCharacterModeStatus;
- (void)enterDetail:(id)a0;
- (BOOL)isNewProfileStyleStatus;
- (BOOL)isArrowStyleStatus;
- (BOOL)isShootSameStyleStatus;
- (void)updateOfficialSymbolLabel:(id)a0;
- (BOOL)p_shouldShowOfficialSymbol:(id)a0;
- (id)p_standardAuthorName:(id)a0;
- (BOOL)p_shouldShowOriginalSymbol:(id)a0;
- (void)updateOriginalSymbolLabel:(id)a0;
- (void)p_setupNewProfileUI;
- (void)p_setupDefaultUI;
- (id)authorNameLabelTextColor;
- (void)beginShoot:(id)a0;
- (void)configOriginalSymbolLabel:(id)a0;
- (void)beginShoot_IMP:(id)a0;
- (id)originalSymbolText;
- (void)updateWithModel:(id)a0 index:(long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
