@class NSString, UIView;

@interface AWEIMInputBarBackgroundComponent : AWEIMComponentBase <AWEIMEmoticonPanelContainerAction, AWEIMMessageListBottomQuoteAction, AWEIMMessageListBackgroundAction>

@property (nonatomic) BOOL shouldShowBackgroundColorForEmoticonPanel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *panelBackgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewWillAppear;
- (void)componentDidMounted:(id)a0;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (id)hostVC;
- (void)containerViewDidChangeHidden:(BOOL)a0;
- (void)onPlayBottomQuoteCoordinateAnimation:(BOOL)a0;
- (void)updateBackgroundColorShow:(BOOL)a0;
- (void)updatePanelBackgroundColorShow:(BOOL)a0;
- (void).cxx_destruct;
- (id)inputVC;

@end
