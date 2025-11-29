@class NSArray, UILabel;

@interface AWERecognitionLoadingView : UIView

@property (nonatomic) BOOL loopContinue;
@property (copy, nonatomic) NSArray *lottieArray;
@property (readonly, nonatomic) UILabel *tipTitleLabel;
@property (readonly, nonatomic) UILabel *tipHintLabel;

- (void)hideLottie;
- (void)p_play;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 hideLottie:(BOOL)a1;
- (void)setupLotties;
- (id)createAnimationView;
- (void)loopItem:(long long)a0 :(long long)a1;
- (struct CGPoint { double x0; double x1; })randomItemCenter:(long long)a0 :(long long)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)play;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })area;
- (void)setupViews;

@end
