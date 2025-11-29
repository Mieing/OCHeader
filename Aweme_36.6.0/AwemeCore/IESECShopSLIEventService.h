@class IESECServiceProxy, NSString, NSMutableDictionary;
@protocol IESECShopFollowService, IESECShopSLIService, IESECShopDataService, IESECShopLiveService;

@interface IESECShopSLIEventService : IESECShopService <IESECShopSLIEventService> {
    NSMutableDictionary *_registeredActionMap;
}

@property (retain, nonatomic) IESECServiceProxy<IESECShopSLIService> *SLIService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopLiveService> *liveService;
@property (retain, nonatomic) IESECServiceProxy<IESECShopFollowService> *followService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)getActionHandlerWithType:(id)a0;
- (void)trackTagListShowEvent:(id)a0 withBTM:(id)a1 host:(id)a2;
- (void)trackTagListClickEvent:(id)a0 withBTM:(id)a1 host:(id)a2;
- (void)trackSubTagShowEvent:(id)a0 withBTM:(id)a1 host:(id)a2;
- (void)trackSubTagClickEvent:(id)a0 withBTM:(id)a1 host:(id)a2;
- (void)registerGeneralActions;
- (void)trackEvent:(id)a0 withParams:(id)a1 onceKey:(id)a2 btm:(id)a3 host:(id)a4;
- (void)registerGeneralAction:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
