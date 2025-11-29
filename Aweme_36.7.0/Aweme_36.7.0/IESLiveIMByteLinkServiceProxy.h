@class NSString, IESLiveIMByteLinkActionCreator, IESLiveIMByteLinkApiHandler;

@interface IESLiveIMByteLinkServiceProxy : NSObject <IESLiveIMByteLinkService, IESLiveIMByteLinkApiService>

@property (retain, nonatomic) IESLiveIMByteLinkActionCreator *byteLinkCreator;
@property (retain, nonatomic) IESLiveIMByteLinkApiHandler *apiHandler;
@property (copy, nonatomic) id /* block */ configBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)addSubscriber:(id)a0 forMessages:(id)a1;
- (void)setPublishers:(id)a0 withTenant:(id)a1 completion:(id /* block */)a2;
- (void)setupApiReqTimeout:(double)a0;
- (void)sendApiMessageWithRequest:(id)a0 callback:(id /* block */)a1;
- (void)removeSubscriber:(id)a0 forMessages:(id)a1;
- (BOOL)sendData:(id)a0 withBizMethod:(long long)a1 completion:(id /* block */)a2;
- (void)deletePublishersWith:(id)a0 completion:(id /* block */)a1;
- (void)setupApiHandler;
- (id)config;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;

@end
