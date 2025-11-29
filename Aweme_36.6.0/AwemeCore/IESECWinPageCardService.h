@class NSMapTable, IESECServiceProxy, IESECLynxCard, NSString, NSObject, IESECWinContext;
@protocol IESECWinTabService, IESECWinDataService, IESECWinOpportunityService, OS_dispatch_queue;

@interface IESECWinPageCardService : NSObject <IESECWinOpportunityProtocol, IESECWinPageCardService>

@property (nonatomic) long long index;
@property (nonatomic) long long indexForSecondaryEvents;
@property (nonatomic) BOOL isVisible;
@property (retain, nonatomic) NSMapTable *events;
@property (retain, nonatomic) NSMapTable *secondaryEvents;
@property (retain, nonatomic) NSMapTable *blockEvents;
@property (retain, nonatomic) IESECLynxCard *pageCard;
@property (nonatomic) BOOL sendingEvents;
@property (nonatomic) BOOL LynxIsReady;
@property (retain, nonatomic) NSMapTable *map;
@property (weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinOpportunityService> *opportunityService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEventBlockedWithModel:(id)a0;
- (void)triggerNativeEventWithModel:(id)a0;
- (void)removeBlockEvent:(id)a0;
- (void)exitWindow;
- (void)receivedLynxEventWithParams:(id)a0 callBack:(id /* block */)a1;
- (void)sendEventWithEventModel:(id)a0;
- (void)pageCardReadyWithCallBack:(id /* block */)a0;
- (void)blockEventWithBlockEvents:(id)a0 callBack:(id /* block */)a1;
- (void)queryPageDataWithQueryKeys:(id)a0 callBack:(id /* block */)a1;
- (void)operateMapWithKey:(id)a0 value:(id)a1 action:(id)a2 callBack:(id /* block */)a3;
- (void)fetchABTestAndSettingsWithType:(id)a0 keys:(id)a1 callBack:(id /* block */)a2;
- (void)operateDBWithOperation:(id)a0 entity:(id)a1 callBack:(id /* block */)a2;
- (void)addBlockEventWithModel:(id)a0;
- (id)pageCardParams;
- (void)triggerLifeCycleChangeEventWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)startWork;
- (id)initWithContext:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
