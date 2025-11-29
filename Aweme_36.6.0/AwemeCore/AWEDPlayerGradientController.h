@class NSString, AWEGradientView;

@interface AWEDPlayerGradientController : AWEDPlayerInteractionBaseController <AWEDPlayerGradientControllerProtocol>

@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)activateType;
- (void)updateDPlayerState:(unsigned long long)a0;
- (void)setupContextHandler;
- (void)showBottomGradientView:(BOOL)a0;
- (void)showTopGradientView:(BOOL)a0;
- (BOOL)canShowTopGradientView;
- (BOOL)canShowBottomGradientView;
- (id)gradientBeginColor;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)gradientEndColor;

@end
