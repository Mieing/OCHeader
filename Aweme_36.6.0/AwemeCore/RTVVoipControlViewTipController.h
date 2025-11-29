@class NSString, UIView, RTVVoipSession, __RTVVoipShowTipConfig;
@protocol RTVVoipConfigureManagerInterface, RxInjector, RTVBubbleGenerator, RTVVoipControlViewTipControllerDelegate, RTVVoipContextManagerInterface;

@interface RTVVoipControlViewTipController : NSObject <RTVVoipSessionObserver, RTVVoipObserver>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVVoipConfigureManagerInterface> configureManager;
@property (readonly, nonatomic) id<RTVVoipContextManagerInterface> voipContextManager;
@property (readonly, nonatomic) id<RTVBubbleGenerator> bubbleGenerator;
@property (readonly, weak, nonatomic) RTVVoipSession *voipSession;
@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) __RTVVoipShowTipConfig *tipConfig;
@property (weak, nonatomic) id<RTVVoipControlViewTipControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)voipServiceDidBegin:(id)a0 voip:(id)a1;
- (void)rtvSession:(id)a0 statusDidChangeTo:(long long)a1 fromStatus:(long long)a2;
- (void)rtvSession:(id)a0 contextKeyPathChange:(id)a1 fromValue:(id)a2 toValue:(id)a3;
- (void)notifyActionButtonLayoutDidRefresh;
- (void)notifyActionButtonWithActionType:(long long)a0;
- (void)__dismissTipIfNeededWithIdentifier:(id)a0;
- (void)__showTipWithConfig:(id)a0;
- (BOOL)__bubbleSourceViewIsValid:(id)a0;
- (void)__dismissTipIfNeeded;
- (BOOL)__showTipIfNeeded;
- (id)__showInteractionStickerTipIfNeeded;
- (void).cxx_destruct;
- (void)dealloc;

@end
