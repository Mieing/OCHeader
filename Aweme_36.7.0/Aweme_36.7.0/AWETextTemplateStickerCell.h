@class UITapGestureRecognizer, NSString, AWECircularProgressView, UIView, BDImageView;

@interface AWETextTemplateStickerCell : AWETextTemplateBaseCell <AWETextTemplateDownloadObserverProtocol>

@property (retain, nonatomic) BDImageView *iconImageView;
@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) AWECircularProgressView *progressView;
@property (nonatomic) unsigned long long downloadStatus;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (retain, nonatomic) UIView *backGrayView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stickerDownloadManager:(id)a0 sticker:(id)a1 downloadProgressChange:(double)a2;
- (void)stickerDownloadManager:(id)a0 didFinishDownloadSticker:(id)a1 extraParams:(id)a2;
- (void)stickerDownloadManager:(id)a0 didFailDownloadSticker:(id)a1 withError:(id)a2;
- (void)stickerDownloadManager:(id)a0 didBeginDownloadSticker:(id)a1;
- (void)stickerDownloadManager:(id)a0 needUpdateCellDownloadedSticker:(id)a1;
- (void)setSelectedBorderColor:(id)a0;
- (void)setStickerSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateStickerIconImage;
- (void)tapAnimation;
- (BOOL)useWholeContentSize;
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

@end
