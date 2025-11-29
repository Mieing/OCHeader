@class UIViewController, AWEPOIAlbumPhotoInfo, UIImageView, NSString, AWEGradientView, UILabel, AWEPOIVideoPlayerView;
@protocol AWEPOIVideoPlayerDelegate;

@interface AWEPOIAlbumHighlightCell : UITableViewCell <AWEPOIAlbumCellProtocol>

@property (retain, nonatomic) AWEGradientView *bottomMask;
@property (retain, nonatomic) AWEPOIVideoPlayerView *playerView;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UIImageView *tagView;
@property (retain, nonatomic) UIImageView *mediaTypeView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEPOIAlbumPhotoInfo *model;
@property (weak, nonatomic) UIViewController *vc;
@property (weak, nonatomic) id<AWEPOIVideoPlayerDelegate> delegate;
@property (copy, nonatomic) id /* block */ didTap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerNotification;
- (void)didEndDisplayingCell;
- (void)didReceivePoiAlbumPhotoPageShowNotification;
- (void)didReceivePoiAlbumPhotoPageHideNotification;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (void)willDisplayCell;
- (void)updateWithModel:(id)a0;
- (void)tapAction;

@end
