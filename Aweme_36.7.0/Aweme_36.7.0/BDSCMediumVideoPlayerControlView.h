@class BDWebImageRequest;

@interface BDSCMediumVideoPlayerControlView : BDSCBaseVideoPlayerControlView

@property (nonatomic) BOOL hasTrySetLottie;
@property (retain, nonatomic) BDWebImageRequest *imageRequest;
@property (nonatomic) BOOL hasLottie;

- (void)refreshUISettings;
- (void)changeToFail;
- (void)changeToSuccess;
- (id)createVideoActionView;
- (void)configBackgroundImageViewWithSuccess:(BOOL)a0;
- (void)trySettLottie;
- (id)getCacheLottieModelWithPath:(id)a0;
- (void)requestLottieModelWithPath:(id)a0;
- (void).cxx_destruct;
- (void)setupViews;
- (void)rebuildConstraints;
- (void)updateSubviews;

@end
