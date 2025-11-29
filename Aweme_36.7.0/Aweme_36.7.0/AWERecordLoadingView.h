@class AVAudioPlayer, NSArray, AWECameraCountDownView, UIImage, UIView, NSString, AWERecordLoadingMaskView;
@protocol _TtP9AWELottie13AWELottieView_;

@interface AWERecordLoadingView : UIView <AVAudioPlayerDelegate>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) AWERecordLoadingMaskView *bgMaskView;
@property (retain, nonatomic) UIImage *gifImage;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *countDownAnimationView;
@property (retain, nonatomic) AVAudioPlayer *player;
@property (retain, nonatomic) NSArray *audioSegementName;
@property (nonatomic) long long audioIndex;
@property (retain, nonatomic) AWECameraCountDownView *countDownView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delayRecordMode:(long long)a1 animationCompletion:(id /* block */)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animationCompletion:(id /* block */)a1;
- (void)playerWithFirstAudioIndex:(long long)a0;
- (void)cancelLoading;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;

@end
