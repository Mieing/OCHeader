@class UILabel, UIButton, UIImageView;
@protocol CAKAlbumAIAssetListSectionHeaderViewProtocol;

@interface CAKAlbumAIAssetListLoraInfoSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *sureButton;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *shadowView;
@property (retain, nonatomic) UIImageView *switchView;
@property (weak, nonatomic) id<CAKAlbumAIAssetListSectionHeaderViewProtocol> delegate;

- (void)useCurLoraInfoIcon;
- (void)switchLoraInfo;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
