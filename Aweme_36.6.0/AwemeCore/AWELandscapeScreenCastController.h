@class NSString;

@interface AWELandscapeScreenCastController : AWELandscapeInteractionBaseController <AWELandscapeScreenCastControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (BOOL)isShowingScreenCastWithControlView:(id)a0;
- (void)showScreenCastControlView:(id)a0 show:(BOOL)a1;
- (void)updateState:(long long)a0;
- (void)viewDidLoad;

@end
