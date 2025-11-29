@class NSString;

@interface AWEFeedTransitionController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedTransitionControllerProtocol, AWEIronManContainerTransitionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (unsigned long long)transition_destinatedType;
- (id)aAWEPadModuleAdapter;
- (void)transitionDidStartTransitionWithContext:(id)a0;
- (void)transitionPerformCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (id)userProfileViewControllerForModel:(id)a0;
- (BOOL)disableTransitionDestinatedViewControllerForSlideDirectionWithModel:(id)a0;
- (BOOL)ifShowUploadAddressBookGuide;
- (id)getIronManModuleService;
- (BOOL)isAnchorDetailPagePanelShowing;
- (void)trackHomePageHotSlide:(unsigned long long)a0 gestureRecognizer:(id)a1;

@end
