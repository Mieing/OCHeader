@class AWECloudAlbumDetailPreviewSelectView, UIImageView, NSString, AWEEditGradientView, AWECloudAlbumDetailPreviewUploadView, UILabel;
@protocol AWECloudAlbumDetailListCellModelProtocol, AWECloudAlbumDetailCellDelegate;

@interface AWECloudAlbumDetailPreviewCell : UICollectionViewCell <AWECloudAlbumDetailListCellModelSubscriber, AWECloudAlbumDetailCellProtocol>

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIImageView *placeholderImageView;
@property (readonly, nonatomic) AWEEditGradientView *bottomMaskView;
@property (readonly, nonatomic) AWECloudAlbumDetailPreviewSelectView *selectView;
@property (readonly, nonatomic) AWECloudAlbumDetailPreviewUploadView *uploadView;
@property (retain, nonatomic) UILabel *durationLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<AWECloudAlbumDetailListCellModelProtocol> cellModel;
@property (weak, nonatomic) id<AWECloudAlbumDetailCellDelegate> delegate;

- (void)p_updateAccessibility;
- (void)cellModelDidChangeCanSelect:(id)a0;
- (void)cellModelDidChangeSelection:(id)a0;
- (void)cellModelDidChangeUploadState:(id)a0;
- (void)cellModelDidChangeIndex:(id)a0;
- (void)emptyAction;
- (void)p_updateSelectView;
- (void)p_updateUploadView;
- (id)p_smallCloudImageWithState:(long long)a0;
- (void)selectAction;
- (void).cxx_destruct;
- (void)refresh;
- (void)prepareForReuse;
- (void)retryAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)deleteAction;
- (void)setup;

@end
