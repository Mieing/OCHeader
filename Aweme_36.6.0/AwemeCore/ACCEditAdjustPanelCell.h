@class UIImageView, ACCEditAdjustItemModel, UILabel, UIView;

@interface ACCEditAdjustPanelCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) ACCEditAdjustItemModel *itemModel;
@property (retain, nonatomic) UIView *downloadStatusIndicatorContainerView;

- (void)p_startLoadingAnimation;
- (id)createRotationAnimation;
- (void)p_stopLoadingAnimation;
- (void)showDownloadingIndicator:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWith:(id)a0;

@end
