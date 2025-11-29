@class UIImageView, IESLiveEffectPanelItemScrollLabel, UIView, IESLiveEffectPanelItemDownloadingProgressView;
@protocol IESLiveEffectPanelItemCellDatasource;

@interface IESLiveEffectPanelItemCell : UICollectionViewCell

@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) UIView *collectedIconContainer;
@property (retain, nonatomic) UIImageView *effectImageView;
@property (retain, nonatomic) UIImageView *downloadImageView;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) IESLiveEffectPanelItemScrollLabel *scrollLabel;
@property (retain, nonatomic) IESLiveEffectPanelItemDownloadingProgressView *progressView;
@property (weak, nonatomic) id<IESLiveEffectPanelItemCellDatasource> datasource;
@property (nonatomic) double cellWidth;
@property (nonatomic) long long cellIndex;

- (void)configSubviews;
- (void)stopDownloadAnimation;
- (void)startDownloadAnimation;
- (void)updateCellSelected:(BOOL)a0;
- (void)updateDownloadingProgress:(double)a0;
- (void)reloadDataWithCellIndex:(long long)a0;
- (void)showDefaultUI;
- (void)configDownloadProgressView;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)accessibilityElementDidBecomeFocused;
- (void)markAsRead;

@end
