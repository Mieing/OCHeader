@class IESECTabKitForwardView, NSString, IESECServiceProxy, IESECTabKitDIContext, NSMutableDictionary;
@protocol IESECTabKitEventSubscriber, IESECTabKitLayoutService, IESECTabKitEventService, IESECTabKitDataService;

@interface IESECTabKitPopupContainerComponent : NSObject <IESECTabKitEventSubscriber, IESECTabKitLynxCardComponentDelegate, IESECTabKitPopupContainerComponent> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableDictionary *_popupMap;
    BOOL _isViewActivated;
}

@property (retain, nonatomic) IESECTabKitForwardView *popupContainer;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *eventService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECTabKitDIContext *tabKitCtx;

+ (BOOL)componentShouldLoadWithContext:(id)a0;
+ (unsigned long long)componentType;

- (void)setupBindings;
- (void)componentDidLoad;
- (void)componentWillAppear:(BOOL)a0;
- (void)componentWillDisappear:(BOOL)a0;
- (void)componentDidAppear:(BOOL)a0;
- (void)componentDidDisappear:(BOOL)a0;
- (void)iesectabkit_containerViewWillLayoutSubviews;
- (void)didSetTabKitCtx:(id)a0;
- (BOOL)loadPopupComponentWithConfig:(id)a0;
- (BOOL)dismissPopupComponentWithID:(id)a0;
- (void)lynxCardComponent:(id)a0 didLoadFail:(id)a1;
- (id)createPopupComponentWithConfig:(id)a0;
- (void)showPopupComponent:(id)a0 withConfig:(id)a1;
- (id)popupKeyWithID:(id)a0 bundleURL:(id)a1;
- (id)popupMapWithID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupViews;

@end
