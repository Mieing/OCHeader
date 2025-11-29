@class BDXBridgeEventSubscriber, AWEEcomSearchFeedInsertResponseModel, NSMutableArray, AWEEcomSearchFeedPitayaResponse;

@interface AWEEcomSearchFeedRealPushController : AWEAwemeNewDetailBaseController

@property (retain, nonatomic) AWEEcomSearchFeedPitayaResponse *pitayaInfo;
@property (retain, nonatomic) AWEEcomSearchFeedInsertResponseModel *responseModel;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSMutableArray *hunterVideoCacheKeyList;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;

- (void)subscribeBridgeEvent;
- (void)unsubscribeBridgeEvent;
- (void)registerPitayaService;
- (void)trackPitayaInsertResult:(BOOL)a0 code:(long long)a1 msg:(id)a2 awemeId:(id)a3;
- (void)insertPitayaCard:(id)a0 pitayaTraceId:(id)a1;
- (void)requsetInsertCardWithPtyParams:(id)a0 pitayaTraceId:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
