@class NSString, UIVisualEffectView, AWEPageContext, UIView, AWEProgressUIConfig;
@protocol AWEProgressDecoratorViewProtocol, AWEProgressContextProtocol;

@interface AWEFakeProgressContainerView : UIView <AWEProgressFakeViewProtocol>

@property (retain, nonatomic) AWEProgressUIConfig *config;
@property (retain, nonatomic) AWEPageContext<AWEProgressContextProtocol> *context;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *whiteView;
@property (retain, nonatomic) UIView *grayView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (nonatomic) BOOL isDisappearAnimating;
@property (retain, nonatomic) UIView<AWEProgressDecoratorViewProtocol> *decoratorView;
@property (nonatomic) double percentage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEBrandColorAdapterClass;

- (id)initWithConfig:(id)a0 context:(id)a1;
- (id)aAWEPadModuleAdapter;
- (id)aAWEBrandColorAdapter;
- (id)sliderThemeColor;
- (void)show:(BOOL)a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (void)setPercentage:(double)a0 animate:(BOOL)a1;
- (id)activeConfig;
- (void).cxx_destruct;
- (id)defaultConfig;
- (void)reset;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;
- (void)show:(BOOL)a0 completion:(id /* block */)a1;

@end
