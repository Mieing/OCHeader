@class NSString, MMUIButton;

@interface WCAdInteractionButtonView : WCAdInteractionContentView <WCCanvasImageLoaderObserver>

@property (retain, nonatomic) MMUIButton *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)initializeGesture;
- (void)organizeSubContentViews;
- (void)onButtonClicked:(id)a0;
- (void)setButtonIcon;
- (void)setButtonIconWithImage:(id)a0;
- (void)updateButtonImageColor;
- (void)ImageDidFail:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void).cxx_destruct;

@end
