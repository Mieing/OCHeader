@class UIImageView, NSString, IESLiveVoicePanelButtonConfig;

@interface IESLiveVoicePanelButton : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIImageView *bgView;
@property (retain, nonatomic) UIImageView *extraBgView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) IESLiveVoicePanelButtonConfig *config;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) id /* block */ deactiveBlock;
@property (copy, nonatomic) id /* block */ activeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deactiveWithAnimation:(BOOL)a0;
- (void)tryInvokeActiveBlock;
- (void)animationScaleAndColorWithView:(id)a0 forKey:(id)a1 active:(BOOL)a2;
- (void)animationOpacityWithView:(id)a0 active:(BOOL)a1;
- (void)tryInvokeDeactiveBlock;
- (void)activeWithAnimation:(BOOL)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithConfig:(id)a0;
- (void)setupUI;

@end
