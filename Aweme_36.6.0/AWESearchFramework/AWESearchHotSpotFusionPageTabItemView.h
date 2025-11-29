@class AWEGradientView, AWESearchHotSpotFusionPageTabItemCurveView, UIImageView, DUXBaseImageView, UIView, DUXBaseLabel;

@interface AWESearchHotSpotFusionPageTabItemView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) DUXBaseImageView *icon;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIView *selectedBackgroundView;
@property (retain, nonatomic) AWEGradientView *selectedGradientView;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) AWESearchHotSpotFusionPageTabItemCurveView *leftSelectedCurveView;
@property (retain, nonatomic) AWESearchHotSpotFusionPageTabItemCurveView *rightSelectedCurveView;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL needSeparator;

- (void)updateIcon:(id)a0;
- (void)p_setupUI;
- (void)updateColorWithTheme:(unsigned long long)a0 needGray:(BOOL)a1;
- (BOOL)p_needUseImage;
- (void)p_updateLayoutNoIcon;
- (void)p_updateHasIconLayout;
- (BOOL)shouldUseNewCurveView;
- (void)toggleIsSelected:(BOOL)a0 theme:(unsigned long long)a1;
- (void)toggleNeedSeparator:(BOOL)a0;
- (void)updateIconLayoutWithHasIcon:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)updateTitle:(id)a0;

@end
