@class AWEScrollStringLabel, UIImageView, NSDictionary, IESEffectModel, AWEVoiceChangerItemView;
@protocol ACCModuleConfigProtocol, SAMIVCDataSourceDelegate;

@interface AWEVoiceChangerCell : UICollectionViewCell

@property (retain, nonatomic) AWEVoiceChangerItemView *effectItemView;
@property (retain, nonatomic) UIImageView *downloadIcon;
@property (retain, nonatomic) UIImageView *loadingIcon;
@property (retain, nonatomic) AWEScrollStringLabel *titleLabel;
@property (nonatomic) double lastTimeRunAnimation;
@property (nonatomic) BOOL isCurrent;
@property (retain, nonatomic) id<ACCModuleConfigProtocol> moduleConfig;
@property (retain, nonatomic) IESEffectModel *currentEffect;
@property (nonatomic) BOOL needChangeSelectedTitleColor;
@property (retain, nonatomic) NSDictionary *config;
@property (weak, nonatomic) id<SAMIVCDataSourceDelegate> vcDataDelegate;

- (void)p_startLoadingAnimation;
- (void)showLoadingAnimation:(BOOL)a0;
- (id)createRotationAnimation;
- (void)p_stopLoadingAnimation;
- (void)setIsCurrent:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setIsCurrent:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)hasDownloadedEffect:(id)a0;
- (BOOL)isDownloadingEffect:(id)a0;
- (void)updateLoadPositionCenter;
- (void)updateLoadPositionBottomRight;
- (void)setThumbnailURLList:(id)a0 placeholder:(id)a1;
- (void)setThumbnailURLList:(id)a0;
- (double)iconDiameter;
- (double)effectDiameter;
- (id)accessibilityLabel;
- (struct CGSize { double x0; double x1; })iconSize;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)accessibilityValue;
- (void)updateText:(id)a0;

@end
