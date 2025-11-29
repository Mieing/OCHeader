@class CAGradientLayer, UIImageView, MMMusicAlbumVideoCellModel, UIView, UILabel, MMAssetSelectCheckButton;
@protocol MMMusicPostVideoTabAlbumVideoCellDelegate;

@interface MMMusicPostVideoTabAlbumVideoCell : UICollectionViewCell {
    MMMusicAlbumVideoCellModel *dataModel;
    UIImageView *_imageView;
    UILabel *_timeLabel;
    CAGradientLayer *_timeLayer;
    MMAssetSelectCheckButton *m_selectCheckButton;
}

@property (retain, nonatomic) UIView *selectCoverView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } checkButtonHitTetsSlop;
@property (weak, nonatomic) id<MMMusicPostVideoTabAlbumVideoCellDelegate> delegate;

+ (id)reuseKey;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateModel:(id)a0 canMultiSelect:(BOOL)a1 minDuration:(double)a2 isSelected:(BOOL)a3;
- (void)updateCanMultiSelect:(BOOL)a0;
- (void)updateMinDuration:(double)a0;
- (void)updateIsSelectedStatus:(BOOL)a0;
- (void)layoutSubviews;
- (id)timeStringBySeconds:(double)a0;
- (void)updateTimeLabelAndTimeLayer;
- (id)getImage;
- (void)udpateCheckBtnSelection:(BOOL)a0;
- (void)onSelectBtnClicked;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
