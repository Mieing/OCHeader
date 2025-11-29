@class UIStackView, AWEUICellMaskView, UIView, AWEAwemeModel, NSString, UIImageView, CAGradientLayer, UILabel;

@interface AWEMusicDetailRelatedAwemeCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CAGradientLayer *maskLayer;
@property (retain, nonatomic) AWEUICellMaskView *cellMaskView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIStackView *shootView;
@property (retain, nonatomic) UIView *shootBackgroundView;
@property (retain, nonatomic) UILabel *shootLabel;
@property (retain, nonatomic) UIImageView *shootIcon;
@property (retain, nonatomic) UIImageView *typeIcon;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTypeLabel;
@property (retain, nonatomic) UILabel *useCountLabel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ shootSameClickBlock;

+ (BOOL)shouldAddCellMaskView;
+ (id)maskLayerColors;

- (void)updateWithAweme:(id)a0;
- (void)updateWithAweme:(id)a0 coverLoadOptions:(unsigned long long)a1 coverLoadCompletion:(id /* block */)a2;
- (void)updateWithAweme:(id)a0 coverLoadCompletion:(id /* block */)a1;
- (void)updateReferString:(id)a0;
- (void)configShootSameClickBlock:(id /* block */)a0;
- (void)addLongPressGesture;
- (void)shootViewAddClickTap;
- (long long)recordButtonType;
- (id)convertUseCount:(unsigned long long)a0;
- (BOOL)supportSlotTemplate:(id)a0;
- (id)slotTemplateCountStringWithCount:(long long)a0;
- (void)updateCellSubViewsWithAweme:(id)a0;
- (void)handleShootTap;
- (void)showNewPressPanelForScene:(id)a0;
- (void)updateCellShape:(double)a0;
- (double)topLeftTagHeight;
- (id /* block */)shareConfigurationHandler;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)handleLongPressGesture:(id)a0;

@end
