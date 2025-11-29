@class UIView, DUXTextTag, AWEAweMVTemplateModel, UIStackView, NSString, UIImageView, UIButton, UITapGestureRecognizer, AWENewFaceStickerModel, UILabel;

@interface AWEFavoriteEffectAndTemplatesTableViewCell : UITableViewCell

@property (retain, nonatomic) AWEAweMVTemplateModel *templateModel;
@property (retain, nonatomic) AWENewFaceStickerModel *effectModel;
@property (nonatomic) long long index;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *coverContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *officialSymbolLabel;
@property (retain, nonatomic) DUXTextTag *officialSymbolTag;
@property (retain, nonatomic) UILabel *usageAmountLabel;
@property (retain, nonatomic) UIImageView *enterDetailView;
@property (retain, nonatomic) UIImageView *shootImageView;
@property (retain, nonatomic) UIView *enterDetailGestureView;
@property (retain, nonatomic) UIButton *shootButton;
@property (retain, nonatomic) UIImageView *propIconView;
@property (retain, nonatomic) UIView *topContentView;
@property (retain, nonatomic) UIStackView *messageStackView;
@property (retain, nonatomic) UIStackView *officialSymbolLabelContentView;
@property (retain, nonatomic) UIStackView *officialStackView;
@property (retain, nonatomic) UIView *officialStackWhiteSpaceView;
@property (retain, nonatomic) UIView *descriptionView;
@property (retain, nonatomic) UIView *accessibilityContainerLeftView;
@property (retain, nonatomic) UIView *accessibilityContainerRightView;
@property (retain, nonatomic) UIView *shootButtonSpaceView;
@property (copy, nonatomic) NSString *clickEnterMethod;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ enterTemplateDetailBlock;
@property (copy, nonatomic) id /* block */ enterEffectDetailBlock;
@property (copy, nonatomic) id /* block */ beginShootBlock;

+ (id)identifier;
+ (double)cellHeight;

- (id)enterMethod;
- (BOOL)isNewProfileCollectLargeCharacterModeStatus;
- (void)enterDetail:(id)a0;
- (BOOL)isNewProfileStyleStatus;
- (BOOL)isArrowStyleStatus;
- (BOOL)isShootSameStyleStatus;
- (id)p_convertUsageAmountToHint:(unsigned long long)a0 isTemplate:(BOOL)a1;
- (void)updateOfficialSymbolLabel:(id)a0;
- (BOOL)p_shouldShowOfficialSymbol:(id)a0;
- (void)p_enterDetailViewDidClicked:(id)a0;
- (void)enterDetailViewDidClicked:(id)a0;
- (void)updateWithTemplateModel:(id)a0 effectModel:(id)a1 index:(long long)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
