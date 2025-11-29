@class NSString, NSMutableDictionary;

@interface IESECLivePublishWidget : IESECLiveBaseWidget <IESECLiveHotAtmosphereService, IESECLiveMessageSubscriber>

@property (retain, nonatomic) NSMutableDictionary *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentService;
+ (id)createModelFromDic:(id)a0;
+ (id)createView;

- (id)initWithRoom:(id)a0 roomContext:(id)a1;
- (void)widgetMount;
- (void)widgetUnmount;
- (id)registerMessageClasses;
- (void)messageReceived_IESECProductRefreshMessage:(id)a0;
- (void)publishAtmosphere:(id)a0;
- (id)observeHotAtmosphereUpdate:(id /* block */)a0;
- (void)unobserveHotAtmosphereUpdateWithIdentifer:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
