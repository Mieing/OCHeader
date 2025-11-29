@class NSString, UIImageView, UIView, IESLiveVideoPlayer;
@protocol IESLiveOrientationConfig;

@interface AWELiveVideoPlayView : IESECSliceXBaseContentElementView <IESLiveVideoPlayerDelegate>

@property (retain, nonatomic) IESLiveVideoPlayer *videoPlayer;
@property (retain, nonatomic) id<IESLiveOrientationConfig> orientationConfig;
@property (retain, nonatomic) UIView *videoPlayerContainer;
@property (retain, nonatomic) UIImageView *firstFrameImage;
@property (retain, nonatomic) UIView *operationContainer;
@property (retain, nonatomic) UIImageView *pauseImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoPlayerDidLoadFirstFrame:(id)a0;
- (void)videoPause;
- (BOOL)setupElementView;
- (void)createVideoPlay;
- (void)trackClickWithPosition:(id)a0;
- (void)forceUpdateToLandscape;
- (void)cleanupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void).cxx_destruct;
- (void)fullScreen;

@end
