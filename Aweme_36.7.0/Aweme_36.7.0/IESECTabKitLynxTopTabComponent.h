@class IESECServiceProxy, NSString, IESECTabKitDIContext;
@protocol IESECTabKitEventSubscriber, IESECTabKitLayoutService, IESECTabKitEventService, IESECTabKitDataService;

@interface IESECTabKitLynxTopTabComponent : IESECTabKitLynxCardComponent <IESECTabKitEventSubscriber, IESECTabKitLynxTopTabComponent> {
    BOOL _firstRender;
}

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

- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)componentDidLoad;
- (void)iesectabkit_didUpdateScreenState:(unsigned long long)a0;
- (void)iesectabkit_didMoveToTabItem:(id)a0 moveType:(unsigned long long)a1;
- (void)didSetTabKitCtx:(id)a0;
- (void)initLynxCardModel;
- (void)fallbackToNAComponent:(id)a0;
- (void)setupBindgs;
- (void).cxx_destruct;
- (id)init;
- (void)setupViews;

@end
