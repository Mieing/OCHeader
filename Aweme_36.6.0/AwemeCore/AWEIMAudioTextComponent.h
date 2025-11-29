@class AWEIMLoadingViewPresenter, AWEIMUIViewPresenter, NSString, AWEIMSelectableLabelPresenter;
@protocol AWEIMAudioContentInterface;

@interface AWEIMAudioTextComponent : AWEIMFlexComponent <AWEIMAudioTextInterface>

@property (weak, nonatomic) id<AWEIMAudioContentInterface> audioContentService;
@property (retain, nonatomic) AWEIMUIViewPresenter *line;
@property (retain, nonatomic) AWEIMLoadingViewPresenter *loading;
@property (retain, nonatomic) AWEIMSelectableLabelPresenter *text;
@property (nonatomic) BOOL isShownLoadingWhenShowText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_addObserver;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)recognizeAudioToText;
- (void)cancelRecognizeAudioToText;
- (void)p_showLoadingViewWithAnimation:(BOOL)a0;
- (void)p_setupAudioText:(id)a0;
- (void)p_updateLineColor:(id)a0;
- (void)p_setupPresenterIfNeeded;
- (void)p_expandOrFoldAudioText:(BOOL)a0;
- (void)p_hideAudioTextButton;
- (id)p_getAudioTextLabelAttributes;
- (void).cxx_destruct;
- (id)audioMessage;

@end
