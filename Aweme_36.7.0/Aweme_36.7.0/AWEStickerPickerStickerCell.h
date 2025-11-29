@class UITapGestureRecognizer, NSString, UIImageView, UIView, BDImageView;
@protocol ACCGenericEffectModel;

@interface AWEStickerPickerStickerCell : AWEStickerPickerStickerBaseCell <ACCGenericEffectDownloadObserverProtocol> {
    id<ACCGenericEffectModel> _sticker;
}

@property (retain, nonatomic) BDImageView *iconImageView;
@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) UIImageView *downloadingView2;
@property (retain, nonatomic) UIImageView *placeholderView;
@property (nonatomic) unsigned long long downloadStatus;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIConfig:(id)a0;
- (void)setSelectedBorderColor:(id)a0;
- (void)setStickerSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateStickerIconImage;
- (BOOL)needExtraBorder:(id)a0;
- (id)p_customPropIconTransformer;
- (id)placeholderImageName;
- (void)willStartUpdateIcon;
- (void)didEndUpdateIcon;
- (long long)iconImageViewRequestOptions;
- (void)tapAnimation;
- (void)p_startDownloadAnimation;
- (void)p_stopDownloadAnimation;
- (id)createRotationAnimation;
- (void)genericEffectDownloadManager:(id)a0 didBeginDownloadGenericEffect:(id)a1;
- (void)genericEffectDownloadManager:(id)a0 changePrefetchToNormal:(id)a1;
- (void)genericEffectDownloadManager:(id)a0 didFinishDownloadSticker:(id)a1;
- (void)genericEffectDownloadManager:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)genericEffectDownloadManager:(id)a0 needUpdateCellDownloadedSticker:(id)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)accessibilityElementDidBecomeFocused;
- (void)setupSubviews;
- (void)setSticker:(id)a0;
- (id)sticker;

@end
