@class NSString, BDASplashMaterialVideoView;

@interface BDASplashMaterialVideoContainer : BDASplashMaterialBaseView <BDASplashVideoViewDelegate>

@property (retain, nonatomic) BDASplashMaterialVideoView *videoView;
@property (nonatomic) BOOL hasPlayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadResource;
- (void)trackNoAdEvent:(id)a0 params:(id)a1;
- (void)splashVideoView:(id)a0 playStatus:(unsigned long long)a1 extraInfo:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 viewModel:(id)a2;
- (id)videoDurationParams;
- (id)splashVideoQualityCommonParams;
- (void)trackAdEvent:(id)a0 adExtra:(id)a1;
- (void)extractSizeFromFormatString:(id)a0 width:(double *)a1 height:(double *)a2;
- (id)getDualView;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)play;
- (BOOL)stop;
- (void)setupViews;

@end
