@class UIView, NSString, NSArray, UIImageView, UIButton, CAGradientLayer, IESEffectModel, UILabel;

@interface ACCAIGCTemplateCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) IESEffectModel *AIGCModel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *userIconImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) UIButton *cornerButton;
@property (retain, nonatomic) UIView *tapView;
@property (retain, nonatomic) UIView *loraSuitLabel;
@property (retain, nonatomic) UIButton *cutSameButton;
@property (retain, nonatomic) UIView *gradientLayerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double imageViewHeight;
@property (retain, nonatomic) UIView *accessibilityBgView;
@property (retain, nonatomic) NSArray *coverDownloadURLs;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (copy, nonatomic) NSString *creationID;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) unsigned long long cellType;
@property (copy, nonatomic) id /* block */ trackSelectCutSameButtonBlock;

+ (double)heightForAIGCcutSameButtonWithCellType:(unsigned long long)a0;
+ (id)cellIdentifier;

- (id)p_accessibilityLabel;
- (struct CGSize { double x0; double x1; })calculateLabelHeightWithLabel:(id)a0;
- (void)setGradientLayerToCoverImage;
- (void)updateHotView;
- (void)updateGradientLayerFrame:(double)a0;
- (void)updateUIMyView;
- (void)updateUIAdView;
- (BOOL)inspirationHideTakeSame;
- (void)hideCurrentViewItems:(BOOL)a0;
- (void)trackNetWorkBuriedkey:(id)a0 status:(long long)a1 duration:(long long)a2 errorcode:(long long)a3 effectid:(id)a4 categorykey:(id)a5;
- (void)oncutSameButtonClicked:(id)a0;
- (void)updateWithIESEffectModel:(id)a0 withCellType:(unsigned long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateIconImageView:(BOOL)a0;

@end
