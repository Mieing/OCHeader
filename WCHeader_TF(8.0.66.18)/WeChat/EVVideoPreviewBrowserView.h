@class AVMutableVideoComposition, NSString, UIImage, NSURL, UIView, UIImageView, UIButton, SightDraft, SightAssetPreviewView, UILabel, AVAsset;
@protocol EVVideoPreviewBrowserViewDelegate;

@interface EVVideoPreviewBrowserView : MMUIScrollView <IMMAssetICloudExt, SightAssetPreviewViewDelegate, EditVideoLogicItemExt, WCEditVideoViewControllerExt, UIScrollViewDelegate, WCAudioModuleDelegate> {
    BOOL _isAssetMuted;
    NSString *_audioModuleIdentifier;
    NSURL *_outputUrl;
    SightDraft *sightDraft;
    BOOL _isPlaying;
    BOOL _isSending;
    UIView *_maskView;
    SightAssetPreviewView *_playerView;
    UIButton *_playBigButton;
    UIImageView *m_icloudImageIcon;
    UILabel *m_icloudLabel;
    UIImageView *m_thumbImageView;
    BOOL _isNeedResumeWXMusic;
    BOOL _isNeedResumeFinderMinimize;
}

@property (copy, nonatomic) id /* block */ loadAssetSuccessBlock;
@property (nonatomic) unsigned long long asserPrepareInvokeCount;
@property (weak, nonatomic) id<EVVideoPreviewBrowserViewDelegate> m_delegate;
@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) AVMutableVideoComposition *videoComposition;
@property (retain, nonatomic) UIImage *thumbImage;
@property (retain, nonatomic) NSString *assetUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaleAspectToFill:(BOOL)a1;
- (void)dealloc;
- (void)loadAsset;
- (void)loadAssetAndPauseAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)pause;
- (BOOL)isPlaying;
- (void)setMute:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getVideoPreviewFrame;
- (void)layoutWithCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)initPlayerViewWithScaleAspectToFill:(BOOL)a0;
- (void)initMaskView;
- (void)initData;
- (void)showThumbImageViewWithThumb:(id)a0;
- (void)changePlayStatus:(BOOL)a0;
- (void)updatePreviewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hiddenThumbImageWhenAssetLoadFinish;
- (void)onResigned:(id)a0;
- (void)sightAssetPreviewViewDidFinishPreparing:(id)a0;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(id)a0;
- (void)sightAssetPreviewView:(id)a0 didFailWithError:(id)a1;
- (void)listenPlayProgressWithCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)onAssetVideoDownloadProgress:(double)a0 assetUrl:(id)a1;
- (void)onAssetVideoDonwloadFailed:(id)a0;
- (void)onRestartVideoPlayAt:(double)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (double)listenTimeIntervalInSection;
- (id)getInnerPlayerView;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)audioModuleInterruptionEnd:(id)a0 param:(id)a1;
- (void)_updateAudioSession;
- (void)_activeAudioModule;
- (void)_deactiveAudioModule;
- (id)_getAudioModuleIdentifier;
- (void)_tryToUpdatePlayerToMute:(BOOL)a0;
- (void).cxx_destruct;

@end
