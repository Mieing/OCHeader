@class UIImageView, UIView;

@interface ACCEditBeautyEffectItemCollectionViewCell : ACCEditBeautyEffectCollectionViewCell

@property (retain, nonatomic) UIView *downloadStatusIndicatorContainerView;
@property (retain, nonatomic) UIImageView *downloadStatusIndicator;
@property (nonatomic) BOOL isSplitlineStatus;

- (void)p_startLoadingAnimation;
- (id)createRotationAnimation;
- (void)updateGrayedOutStatus:(BOOL)a0;
- (void)updateSplitlineStatus:(BOOL)a0;
- (void)p_stopLoadingAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateFrames;
- (void)updateDownloadStatus:(BOOL)a0;

@end
