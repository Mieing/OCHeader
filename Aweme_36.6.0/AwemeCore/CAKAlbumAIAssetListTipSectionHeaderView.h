@class UILabel, UIButton;
@protocol CAKAlbumAIAssetListSectionHeaderViewProtocol;

@interface CAKAlbumAIAssetListTipSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (weak, nonatomic) id<CAKAlbumAIAssetListSectionHeaderViewProtocol> delegate;

- (void)hidHeaderView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
