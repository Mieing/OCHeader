@class CAGradientLayer, MMUILabel, MMAssetSelectCheckButton, MMWebImageView, UIView, MMMusicFinderVideoCellModel;
@protocol MMMusicPostVideoCollectionCellDelegate;

@interface MMMusicPostVideoCollectionCell : UICollectionViewCell {
    MMMusicFinderVideoCellModel *_dataModel;
    MMWebImageView *_coverImageView;
    CAGradientLayer *_timeLayer;
    MMUILabel *_timeLabel;
    MMAssetSelectCheckButton *m_selectCheckButton;
}

@property (retain, nonatomic) UIView *selectCoverView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } checkButtonHitTetsSlop;
@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<MMMusicPostVideoCollectionCellDelegate> delegate;

+ (id)reuseKeyStr;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)updateModel:(id)a0 canMultiSelect:(BOOL)a1 minDuration:(double)a2 isSelected:(BOOL)a3;
- (void)updateCanMultiSelect:(BOOL)a0;
- (void)updateMinDuration:(double)a0;
- (void)updateIsSelectedStatus:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)getImage;
- (void)udpateCheckBtnSelection:(BOOL)a0;
- (void)onSelectBtnClicked;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
