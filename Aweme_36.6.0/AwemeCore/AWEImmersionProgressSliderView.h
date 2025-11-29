@class UIColor, NSString, UIView;

@interface AWEImmersionProgressSliderView : UIView <AWEFakeProgressSliderViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) BOOL needSetProgress;
@property (nonatomic) double percentage;
@property (retain, nonatomic) UIColor *minimumTrackTintColor;
@property (retain, nonatomic) UIColor *maximumTrackTintColor;
@property (nonatomic) BOOL isDisappearAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgressUI;
- (id)initWithColor:(id)a0 backgroundColor:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (void)show:(BOOL)a0 completion:(id /* block */)a1;

@end
