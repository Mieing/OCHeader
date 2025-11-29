@class MJLivePhotoConfig, MJGradientView, UIImageView, MJLivePhotoButtonModel, NSString, MJDualBorderLayer;

@interface MJImageComposingThumbnailCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *liveImageView;
@property (retain, nonatomic) MJGradientView *gradientView;
@property (retain, nonatomic) MJLivePhotoButtonModel *liveModel;
@property (retain, nonatomic) MJDualBorderLayer *borderLayer;
@property (readonly, nonatomic) UIImageView *thumbnailImageView;
@property (copy, nonatomic) NSString *sceneID;
@property (nonatomic) BOOL isCellSelected;
@property (retain, nonatomic) MJLivePhotoConfig *liveConfig;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)syncWithConfig;
- (void)updateCellSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_updateBorderAndCorner;
- (void).cxx_destruct;

@end
