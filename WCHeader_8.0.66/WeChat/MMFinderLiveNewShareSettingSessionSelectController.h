@class NSString;

@interface MMFinderLiveNewShareSettingSessionSelectController : SessionSelectController <SessionSelectViewDelegate, MMUIViewControllerOverrideOrientationMaskProtocol>

@property (nonatomic) unsigned long long overrideOrientationMask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserInterfaceStyle:(long long)a0;
- (id)initWithUserInterfaceStyle:(long long)a0 selectedContacts:(id)a1 requiredContacts:(id)a2;
- (id)navigationBarBackgroundColor;
- (id)getColorProxy;
- (void)onSearchTextFieldEditStateChange:(BOOL)a0;
- (double)recentForwardMarginForSelectView:(id)a0 defaultMargin:(double)a1;
- (void)commonInit;
- (BOOL)shouldOverrideMethods;
- (unsigned long long)supportedInterfaceOrientations;

@end
