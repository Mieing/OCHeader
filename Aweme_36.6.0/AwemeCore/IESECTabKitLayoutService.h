@class NSString, IESECServiceProxy, IESECTabKitBFFUIConfig, UIView;
@protocol IESECSlidingTabbarProtocol, IESECTabKitEventService, IESECTabKitEventSubscriber;

@interface IESECTabKitLayoutService : IESECTabKitService <IESECTabKitLayoutService>

@property (retain, nonatomic) IESECTabKitBFFUIConfig *uiConfig;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *eventService;
@property (retain, nonatomic) UIView<IESECSlidingTabbarProtocol> *relatedTabBar;
@property (weak, nonatomic) UIView *rootView;
@property (weak, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configUI:(id)a0;
- (void)triggerLayoutAnimated:(BOOL)a0;
- (void).cxx_destruct;

@end
