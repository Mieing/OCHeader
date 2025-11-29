@class NSString;
@protocol AWECloudAlbumDetailListCellModelProtocol, AWECloudAlbumDetailCellDelegate;

@interface AWECloudAlbumDetailAddCell : UICollectionViewCell <AWECloudAlbumDetailCellProtocol>

@property (retain, nonatomic) id<AWECloudAlbumDetailListCellModelProtocol> cellModel;
@property (weak, nonatomic) id<AWECloudAlbumDetailCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)refresh;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)addAction;

@end
