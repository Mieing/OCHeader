@class UIViewController, AWEPOIAlbumPhotoInfo, NSString, UILabel, AWEGradientView, AWEPOIVideoPlayerView;
@protocol AWEPOIVideoPlayerDelegate;

@interface AWEPOIAlbumMediaVideoCell : UITableViewCell <AWEPOIAlbumCellProtocol>

@property (retain, nonatomic) AWEGradientView *labelMask;
@property (retain, nonatomic) AWEGradientView *photoMask;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) AWEPOIVideoPlayerView *playerView;
@property (retain, nonatomic) AWEPOIAlbumPhotoInfo *model;
@property (weak, nonatomic) UIViewController *vc;
@property (weak, nonatomic) id<AWEPOIVideoPlayerDelegate> delegate;
@property (copy, nonatomic) id /* block */ didTap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEndDisplayingCell;
- (void)adjustLayout;
- (void)didReceivePoiAlbumPhotoPageShowNotification;
- (void)didReceivePoiAlbumPhotoPageHideNotification;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupViews;
- (void)willDisplayCell;
- (void)updateWithModel:(id)a0;
- (void)tapAction;

@end
