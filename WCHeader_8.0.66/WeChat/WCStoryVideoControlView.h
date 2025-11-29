@class WCStoryMediaItem, NSString, UIImageView, UIImage, UIView;
@protocol WCStoryVideoControlViewDelegate;

@interface WCStoryVideoControlView : WCPlayerControlView <WCStoryDownloadImageCdnMgrExt>

@property (retain, nonatomic) WCStoryMediaItem *mediaItem;
@property (retain, nonatomic) UIImage *thumbImage;
@property (retain, nonatomic) UIView *toolPanView;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (weak, nonatomic) id<WCStoryVideoControlViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 MediaItem:(id)a1;
- (void)initSubview;
- (void)tryLoadThumbImage;
- (void)hiddenThumbImageView;
- (void)onVideoPlay;
- (void)onVideoPlayFail:(unsigned long long)a0 errorCode:(int)a1 LocalizedErrorDes:(id)a2;
- (void)onReceiveAllVideoData:(id)a0;
- (void)onStoryThumbDownloadSuccess:(id)a0;
- (void)onStoryThumbDownloadFail:(id)a0;
- (void).cxx_destruct;

@end
