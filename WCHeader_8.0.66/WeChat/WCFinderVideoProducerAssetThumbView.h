@class UIImageView, UIView;

@interface WCFinderVideoProducerAssetThumbView : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (retain, nonatomic) UIImageView *assetTypeIconView;
@property (retain, nonatomic) UIView *selectedMaskView;

+ (id)cellIdentifier;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadViewModel:(id)a0;
- (void)_loadAssetThumbViewForAssetInfo:(id)a0;
- (void)_resetDefaultThumbImage;
- (void)_loadAssetTypeIconForAssetInfo:(id)a0;
- (void)_loadSelectedMaskViewForViewModel:(id)a0;
- (void)_initView;
- (void).cxx_destruct;

@end
