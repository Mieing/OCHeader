@class NSString, CJPayAnnieRouterManager;

@interface CJPayAnnieBusinessImpl : NSObject <BDXBusinessProtocol, BDXServiceProtocol>

@property (retain, nonatomic) CJPayAnnieRouterManager *routerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createService;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)registerComponents;
+ (unsigned long long)serviceType;

- (id)_handleConfig:(id)a0 context:(id)a1;
- (void)loadURL:(id)a0 container:(id)a1 context:(id)a2;
- (id)willResolveScheme:(id)a0 context:(id)a1;
- (void)closeOffline;
- (void)openOffline;
- (void).cxx_destruct;

@end
