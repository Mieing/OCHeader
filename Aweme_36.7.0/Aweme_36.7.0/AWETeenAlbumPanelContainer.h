@class AWETeenAlbumPanelCollectionView, AWETeenAlbumDataController, AWETeenAlbumPanelCollectView, UILabel, AWETeenAlbumPanelNoDataView, DUXTeenPopover;

@interface AWETeenAlbumPanelContainer : AWETeenBasePanelContainer

@property (retain, nonatomic) AWETeenAlbumPanelCollectionView *collectionView;
@property (retain, nonatomic) AWETeenAlbumDataController *dataController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *episodeLabel;
@property (retain, nonatomic) AWETeenAlbumPanelNoDataView *noDataView;
@property (retain, nonatomic) AWETeenAlbumPanelCollectView *albumCollectView;
@property (retain, nonatomic) DUXTeenPopover *popover;

- (void)p_setupView;
- (id)initWithDataController:(id)a0;
- (void)p_addCollectionView;
- (void)presentWithPlayingIndex:(long long)a0;
- (void)showAlbumCollectSuccessPopover;
- (void)p_addHeader;
- (void).cxx_destruct;
- (void)didDismiss;

@end
