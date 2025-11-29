@class CAGradientLayer, AWEScrollStringLabel, UIImageView, RTVStickerPanelStickerViewModel, UIView, RTVStickerCircularProgressView, BDImageView;
@protocol RxInjector, RTVStickerPanelDataControllerInterface;

@interface RTVStickerPanelStickerCell : AWEStickerPickerStickerBaseCell

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) BDImageView *iconImageView;
@property (retain, nonatomic) UIImageView *downloadImgView;
@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) RTVStickerCircularProgressView *progressView;
@property (retain, nonatomic) AWEScrollStringLabel *propNameLabel;
@property (retain, nonatomic) CAGradientLayer *propNameGradientLayer;
@property (nonatomic) unsigned long long downloadStatus;
@property (weak, nonatomic) id<RTVStickerPanelDataControllerInterface> dataController;
@property (retain, nonatomic) RTVStickerPanelStickerViewModel *viewModel;

- (void)rxAwakeFromPropertyInjection;
- (void)createComponents;
- (void)setSelectedBorderColor:(id)a0;
- (void)__removeObserver;
- (void)setStickerSelected:(BOOL)a0;
- (void)__updateStickerSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)__addObserverWithViewModel:(id)a0;
- (void)executeSelectedAnimation;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)accessibilityElementDidBecomeFocused;
- (void)setSticker:(id)a0;
- (void)layoutComponents;

@end
