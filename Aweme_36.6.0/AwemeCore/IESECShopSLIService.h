@class IESECShopThrottle, NSString, IESECServiceProxy, NSMutableDictionary;
@protocol IESECSliceXInstanceConfig, IESECSliceXInstanceInterface, IESECShopStateService, IESECShopSLIEventService, IESECShopEventService;

@interface IESECShopSLIService : IESECShopService <IESECSliceXEventForwardDelegate, IESECShopSLIService> {
    NSMutableDictionary *_registeredControllerMap;
    NSMutableDictionary *_registeredStateMap;
}

@property (retain, nonatomic) id<IESECSliceXInstanceConfig> sliceXConfig;
@property (retain, nonatomic) id<IESECSliceXInstanceInterface> sliceXInstance;
@property (retain, nonatomic) IESECShopThrottle *stateDispatchThrottle;
@property (retain, nonatomic) IESECServiceProxy<IESECShopStateService> *stateService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopEventService> *eventService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopSLIEventService> *SLIEventService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataSourceForItemData:(id)a0;
+ (id)dataSourceForSWSInfoResponse:(id)a0 cardConfig:(id)a1;

- (id)getElementViewInSliceXView:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void)registerBizObjectWithKey:(id)a0 bizObj:(id)a1;
- (void)triggerSliceXEvent:(id)a0;
- (id)createSliceXView:(id)a0 completion:(id /* block */)a1;
- (void)bindSliceXView:(id)a0 dataSource:(id)a1 uniqueID:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3 completion:(id /* block */)a4;
- (void)bindSLICardController:(id)a0;
- (id)getSLICardUniqueID:(id)a0;
- (id)getSLICardControllerWithUniqueID:(id)a0;
- (id)getSliceItemStates;
- (void)updateSliceItemState:(id)a0 withValue:(id)a1;
- (void)updateSliceItemState:(id)a0 withValue:(id)a1 uniqueId:(id)a2;
- (void)preloadShopSLIResources;
- (id)getGlobalSliceItemStates;
- (id)createSliceXViewSync:(id)a0 error:(id *)a1;
- (void)doBindSliceXView:(id)a0 dataSource:(id)a1 uniqueID:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3 completion:(id /* block */)a4;
- (id)dataBindThrottleForController:(id)a0;
- (void)autoBindSliceItemStateForUniqueID:(id)a0 withDataSourceDict:(id)a1;
- (id)preprocessDataSourceDict:(id)a0;
- (struct CGSize { double x0; double x1; })bindSliceXViewSync:(id)a0 dataSource:(id)a1 uniqueID:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3 error:(id *)a4;
- (void)dispatchSliceItemState:(id)a0 withValue:(id)a1;
- (void)registerListener:(id)a0 forSliceItemState:(id)a1;
- (void)registerListener:(id)a0 forSliceItemStates:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
