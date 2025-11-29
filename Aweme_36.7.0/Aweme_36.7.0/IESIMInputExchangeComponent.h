@class NSString, AWEIMExchangeAndSendImageActionBarView;

@interface IESIMInputExchangeComponent : AWEIMComponentBase <IESIMInputThemeChangedAction, IESIMInputExchangeComponentInterface, IESIMInputLayoutAction>

@property (nonatomic) BOOL delayCreateToolbarExchangeImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMExchangeAndSendImageActionBarView *toolbarExchangeImage;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)shouldShowExchangeImageActionBar:(BOOL)a0;
- (BOOL)shouldDisableSendWhileAIReplyingWithToast:(BOOL)a0;
- (void)exchangeActionBarClickedWithType:(unsigned long long)a0;
- (void)resetSendButtonWithScene:(unsigned long long)a0;
- (id)p_createToolbarExchangeImage;
- (void)inputThemeChangedWithThemeStyle:(long long)a0;
- (void)refreshBackgroundWithBackGroundImage:(BOOL)a0;
- (void)triggerLayoutWhenTransitionWithNeedResize:(BOOL)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)hasExchangeToolBar;
- (void).cxx_destruct;

@end
