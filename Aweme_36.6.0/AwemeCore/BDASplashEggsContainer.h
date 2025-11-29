@class BDASplashVideoInfoModel, BDASplashBaseVideoView, IESLiveVideoGiftController, NSString, BDASplashImageInfoModel, BDImageView;
@protocol BDASplashEggsDelegate;

@interface BDASplashEggsContainer : UIView <BDASplashVideoViewDelegate, IESLiveVideoGiftControllerDelegate>

@property (nonatomic) long long eggsType;
@property (retain, nonatomic) BDASplashImageInfoModel *imageInfoModel;
@property (retain, nonatomic) BDASplashVideoInfoModel *videoInfoModel;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) BDASplashBaseVideoView *videoView;
@property (retain, nonatomic) IESLiveVideoGiftController *alphaVideoController;
@property (nonatomic) long long reason;
@property (nonatomic) double eggsBeginTime;
@property (weak, nonatomic) id<BDASplashEggsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishPlayingWithError:(id)a0;
- (void)videoGiftController:(id)a0 willPlayFrame:(id)a1;
- (void)splashVideoView:(id)a0 playStatus:(unsigned long long)a1 extraInfo:(id)a2;
- (void)applyGreyThemeWithImage:(id)a0;
- (void)showWithAlphaVideoPath:(id)a0 maskInfo:(id)a1;
- (void)eggsEnterBackground;
- (void)eggsViewDidDisappear;
- (void)eggsViewDidAppear;
- (void)eggsViewBreak;
- (void)showWithBDImage:(id)a0;
- (void)showWithVideoLocalURL:(id)a0 secretKey:(id)a1;
- (void).cxx_destruct;
- (long long)getDuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
