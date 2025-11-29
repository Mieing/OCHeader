@class AWEPOIDetailUGCVideoPlayerView, NSString, AWEPOIDetailPhotosPreviewBaseViewController;
@protocol AWEPOIDetailUGCVideoPreviewCellDelegate;

@interface AWEPOIDetailUGCVideoPreviewCell : UICollectionViewCell <AWEPOIDetailUGCVideoPlayerDelegate, AWEPOIDetailVideosPreviewBaseCellProtocol>

@property (retain, nonatomic) AWEPOIDetailUGCVideoPlayerView *playerView;
@property (weak, nonatomic) id<AWEPOIDetailUGCVideoPreviewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWEPOIDetailPhotosPreviewBaseViewController *vc;

- (id)zoomTransitionEndView;
- (void)updateWithPhotoInfo:(id)a0;
- (void)playerSeekTo:(double)a0;
- (void)videoDidPlay:(double)a0;
- (void)playerViewDidTap:(long long)a0;
- (BOOL)enableLoopPlay;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didAppear;
- (long long)playerState;
- (void)willDisappear;
- (void)setMute:(BOOL)a0;
- (void)setupUI;

@end
