@class UILabel, UIImageView, NSString;
@protocol RxInjector;

@interface RTVVoipPPropTipView : UIView <RTVVoipPPropTipViewInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) UILabel *tipLabel;
@property (readonly, nonatomic) UIImageView *tipImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)showWithEffect:(id)a0;
- (void)__stopAnimation;
- (void)dismiss;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)__startAnimation;

@end
