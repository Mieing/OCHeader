@class NSString, UIVisualEffectView, UIView, UILabel, BDImageView;
@protocol RTVVoipResourceFetcherInterface, RxInjector, RTVVoipConfigureManagerInterface;

@interface RTVVoipActionButton : UIControl <UIGestureRecognizerDelegate>

@property (nonatomic) long long actionType;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (retain, nonatomic) UIView *imageBackgoundView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *subEffectView;
@property (retain, nonatomic) BDImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) BOOL enableZoomWhenHighlight;
@property (nonatomic) BOOL softDisable;
@property (nonatomic) BOOL customEnablement;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> voipConfigManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionButtonWithType:(long long)a0 iconStr:(id)a1 injector:(id)a2;
+ (id)actionButtonWithType:(long long)a0 iconNamed:(id)a1 injector:(id)a2;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)updateType:(long long)a0;
- (void)__setupLayout;
- (void)__updateType:(long long)a0 animation:(BOOL)a1;
- (void)__updateIconWithStr:(id)a0 animation:(BOOL)a1;
- (void)updateIconWithStr:(id)a0;
- (void)__updateIconWithImageNamed:(id)a0;
- (void)__switchIconAddSpringAnimation;
- (id)__titleLabelShadow;
- (void)updateButtonToDefaultIconWithType:(long long)a0;
- (void)updateIconWithStr:(id)a0 animation:(BOOL)a1;
- (void)updateTitleWithString:(id)a0;
- (void)updateImageBackgoundViewCornerRadius:(double)a0;
- (void)enableZoomWhenHighlight:(BOOL)a0;
- (void)allowCustomEnablement:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)setAlpha:(double)a0;

@end
