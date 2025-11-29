@class NSArray, NSString;
@protocol IESLiveByteLinkCheckServiceMessageReceiver;

@interface IESLiveByteLinkCheckServiceImp : NSObject <IESLiveIMMessageSubscriber>

@property (retain, nonatomic) NSArray *params;
@property (copy, nonatomic) NSString *fromPage;
@property (weak, nonatomic) id<IESLiveByteLinkCheckServiceMessageReceiver> receiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setupByteLinkService;
- (void)processNotifyMessage:(id)a0 param:(id)a1;
- (void)processFetchMessage:(id)a0 param:(id)a1;
- (id)generateEcomCartResultWithMessage:(id)a0 param:(id)a1;
- (void)processPushResult:(id)a0;
- (id)generateExtendAreaUpdateResultWithMessage:(id)a0 param:(id)a1;
- (id)generatePKOrLinkMicResultWithMessage:(id)a0 param:(id)a1;
- (void)trackHotRefreshEnableWithStatusMessage:(id)a0;
- (void)processFetchResult:(id)a0;
- (void)setPublishersWith:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)subscribeLiveStatusChangeWithParams:(id)a0 extra:(id)a1 complete:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)messageReceived:(id)a0;

@end
