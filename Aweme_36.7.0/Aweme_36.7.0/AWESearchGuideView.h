@class NSString, LOTAnimationView;

@interface AWESearchGuideView : UIView

@property (copy, nonatomic) NSString *lottieFilePath;
@property (copy, nonatomic) NSString *accessKey;
@property (nonatomic) BOOL lottieIsDownload;
@property (retain, nonatomic) LOTAnimationView *lottieView;

- (BOOL)checkLottieIsDownLoad;
- (void)lottieResourceDownload;
- (void)addTipLabel:(id)a0;
- (void)addLottieView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
