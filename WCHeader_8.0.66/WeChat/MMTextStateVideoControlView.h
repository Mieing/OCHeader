@class MMTextStateMediaItem, UIImageView, UIImage, UIView, NSString;
@protocol MMTextStateVideoControlViewDelegate;

@interface MMTextStateVideoControlView : WCPlayerControlView <MMTextStateMediaDownloadImageCdnMgrExt>

@property (retain, nonatomic) MMTextStateMediaItem *mediaItem;
@property (retain, nonatomic) UIImage *thumbImage;
@property (retain, nonatomic) UIView *toolPanView;
@property (retain, nonatomic) UIImageView *thumbImageView;
@property (weak, nonatomic) id<MMTextStateVideoControlViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 MediaItem:(id)a1;
- (void)initSubview;
- (void)updateVideoCurrentTime:(double)a0;
- (void)onPlayerCreated;
- (void)tryLoadThumbImage;
- (void)hiddenThumbImageView;
- (void)onTextStateMediaThumbDownloadSuccess:(id)a0;
- (void)onTextStateMediaThumbDownloadFail:(id)a0;
- (void).cxx_destruct;

@end
