@class UIImageView, UILabel, UIView, IESLiveEffectProgressView;

@interface IESLiveBeautyCommonDetailItemCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *redDot;
@property (retain, nonatomic) UIImageView *downloadImageView;
@property (retain, nonatomic) IESLiveEffectProgressView *downloadProgressView;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UILabel *tagLabel;

- (void)configIconView;
- (void)configSubViews;
- (void)updateSelectStatus:(BOOL)a0;
- (void)startDownloadAnimation;
- (BOOL)hasTestTag:(id)a0;
- (void)addDownloadProgressView;
- (void)updateDownloadingProgress:(double)a0;
- (void)updateCellWith:(id)a0 cornerRadius:(long long)a1;
- (void)endDownloadAnimation;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
