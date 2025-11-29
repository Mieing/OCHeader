@class IESECShopProductsPitayaConfig, NSString, IESECServiceProxy, IESECGCDTimer;
@protocol IESECShopDataService;

@interface IESECShopClientAiService : IESECShopService <IESECShopClientAiService> {
    IESECGCDTimer *_timer;
    IESECShopProductsPitayaConfig *_config;
}

@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)genUserBehaviorParamsForShopRerank:(id)a0;
- (id)readMemCacheForShopRerank:(BOOL *)a0;
- (void)updateUserBehaviorParams:(id)a0;
- (void)reportShopRerankMemCache:(id)a0 readSuccess:(BOOL)a1 requestType:(id)a2;
- (void)runShopRerankTask;
- (void)stopShopRerankTask;
- (void).cxx_destruct;
- (id)init;

@end
