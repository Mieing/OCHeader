@class UILabel, UIButton;
@protocol RTVEffectGameListHintViewDelegate, RxInjector;

@interface RTVEffectGameListHintView : UIView

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) UILabel *noGameLabel;
@property (readonly, nonatomic) UILabel *loadFailedLabel;
@property (readonly, nonatomic) UIButton *retryButton;
@property (weak, nonatomic) id<RTVEffectGameListHintViewDelegate> delegate;

- (void)rtv_awakeFromControllerInjector;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)showEmptyView:(BOOL)a0;
- (void)showRetryView:(BOOL)a0;
- (void)__buttonTouchUpInside:(id)a0;
- (void).cxx_destruct;

@end
