@class IESLiveKTVComponentContext, UIImageView, HTSEventForwardingView;

@interface IESLiveKTVChorusBGComponent : IESLiveInteractComponentBase

@property (weak, nonatomic) IESLiveKTVComponentContext *ktvContext;
@property (retain, nonatomic) HTSEventForwardingView *container;
@property (retain, nonatomic) UIImageView *bgView;

- (void)componentMount;
- (void)componentUnmount;
- (void)updateTheme:(id)a0;
- (void)updateBgWithStage:(id)a0;
- (void).cxx_destruct;
- (void)addObservers;

@end
