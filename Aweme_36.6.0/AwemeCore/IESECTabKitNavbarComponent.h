@class IESECTabKitForwardView, UIStackView, IESECServiceProxy, UIImageView, NSString, IESECTabKitDIContext, IESECTabKitNavbarConfigModel;
@protocol IESECTabKitEventSubscriber, IESECTabKitAbilityService, IESECTabKitLayoutService, IESECTabKitEventService, IESECTabKitDataService;

@interface IESECTabKitNavbarComponent : NSObject <IESECTabKitNavItemViewDelegate, IESECTabKitEventSubscriber, IESECTabKitNavbarComponent> {
    IESECTabKitNavbarConfigModel *_navbarConfig;
}

@property (retain, nonatomic) IESECServiceProxy<IESECTabKitDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitLayoutService> *layoutService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitEventService, IESECTabKitEventSubscriber> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECTabKitAbilityService> *abilityService;
@property (retain, nonatomic) IESECTabKitForwardView *containerView;
@property (retain, nonatomic) UIImageView *backView;
@property (retain, nonatomic) UIStackView *rightStackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECTabKitDIContext *tabKitCtx;

+ (BOOL)componentShouldLoadWithContext:(id)a0;
+ (unsigned long long)componentType;

- (void)setupBindings;
- (void)componentDidLoad;
- (void)triggerLayoutAnimated:(BOOL)a0;
- (void)iesectabkit_willUpdateScreenState:(unsigned long long)a0;
- (void)iesectabkit_didUpdateScreenState:(unsigned long long)a0;
- (void)iesectabkit_didMoveToTabItem:(id)a0 moveType:(unsigned long long)a1;
- (void)iesectabkit_didTapAtTopTabItem:(id)a0;
- (void)didSetTabKitCtx:(id)a0;
- (void)componentVisibilityWillChange:(BOOL)a0 animated:(BOOL)a1;
- (void)reloadNavbarIfNeeded;
- (void)reloadNavbarWithConfig:(id)a0 screenState:(unsigned long long)a1;
- (void)reloadNavbarWithConfig:(id)a0;
- (BOOL)shouldHiddenNavbar:(id)a0 screenState:(unsigned long long)a1;
- (void)configNavbar:(id)a0;
- (void)backViewDidClick;
- (void)navItemView:(id)a0 didDisplay:(id)a1;
- (void)navItemView:(id)a0 didSelect:(id)a1;
- (void).cxx_destruct;
- (id)componentView;
- (void)setupViews;

@end
