@class BDImageView, AVPlayerItem, AVPlayerLayer, AVPlayer;
@protocol IESLivePhotoPickerAsset;

@interface IESLiveAudioThemePreviewView : UIView

@property (retain, nonatomic) id<IESLivePhotoPickerAsset> asset;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) AVPlayer *avPlayer;
@property (retain, nonatomic) AVPlayerLayer *playLayer;
@property (retain, nonatomic) AVPlayerItem *playerItem;

- (void)handleDidBecomeActiveNotification:(id)a0;
- (void)moviePlayDidEnd;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 asset:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setup;

@end
