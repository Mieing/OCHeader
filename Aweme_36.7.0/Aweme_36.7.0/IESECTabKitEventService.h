@class NSString, NSHashTable;

@interface IESECTabKitEventService : IESECTabKitService <IESECTabKitEventService, IESECTabKitEventSubscriber> {
    NSHashTable *_subscribers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesectabkit_firstScreenLoaded:(id)a0;
- (void)iesectabkit_tabItem:(id)a0 hybridLifeCycle:(id)a1 timestamp:(double)a2 params:(id)a3;
- (void)addEventSubscriber:(id)a0;
- (void)iesectabkit_willDisplayTabItem:(id)a0;
- (void)iesectabkit_willDisplayBottomTabItem:(id)a0;
- (void)iesectabkit_didTapAtBottomTabItem:(id)a0;
- (void)iesectabkit_didSelectBottomTabItem:(id)a0;
- (void)iesectabkit_willUpdateScreenState:(unsigned long long)a0;
- (void)iesectabkit_didUpdateScreenState:(unsigned long long)a0;
- (void)iesectabkit_needsUpdateStatusBarStyle;
- (void)iesectabkit_didInterceptCloseAction:(unsigned long long)a0 tabItem:(id)a1;
- (void)iesectabkit_didDisplayNavItem:(id)a0;
- (void)iesectabkit_didSelectNavItem:(id)a0;
- (void)iesectabkit_willDisplayTopTabItem:(id)a0;
- (void)iesectabkit_didMoveToTabItem:(id)a0 moveType:(unsigned long long)a1;
- (void)iesectabkit_willMoveToTabItem:(id)a0;
- (void)iesectabkit_cancelMoveToTabItem:(id)a0;
- (void)iesectabkit_didTapAtTopTabItem:(id)a0;
- (void)iesectabkit_didSelectTopTabItem:(id)a0;
- (void)iesectabkit_tabItem:(id)a0 visibilityDidChange:(BOOL)a1;
- (void)iesectabkit_tabItem:(id)a0 hybridViewDidFinishLoadWithURL:(id)a1 error:(id)a2;
- (void)iesectabkit_tabItem:(id)a0 hybridViewDidScroll:(id)a1;
- (void)iesectabkit_splitSlideContainerDidScroll:(id)a0;
- (void)iesectabkit_willDisplayPopup:(id)a0;
- (void)iesectabkit_didDismissPopup:(id)a0;
- (id)subscriberArrayBySelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)forwardInvocation:(id)a0;

@end
