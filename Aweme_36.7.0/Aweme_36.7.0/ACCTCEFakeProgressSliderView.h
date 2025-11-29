@class UIVisualEffectView, UIView;

@interface ACCTCEFakeProgressSliderView : UIView

@property (nonatomic) double percentage;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *whiteView;
@property (retain, nonatomic) UIView *grayView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (nonatomic) BOOL isDisappearAnimating;
@property (nonatomic) BOOL useThinThumbnail;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupUI;
- (void)show:(BOOL)a0 completion:(id /* block */)a1;

@end
