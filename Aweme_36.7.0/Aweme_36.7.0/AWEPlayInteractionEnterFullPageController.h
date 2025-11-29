@class NSArray, NSString;

@interface AWEPlayInteractionEnterFullPageController : AWEPlayInteractionNewBaseController <BDChainLogNodeHostProtocol, AWEPlayInteractionEnterFullPageControllerProtocol>

@property (retain, nonatomic) NSArray *routerArray;
@property (nonatomic) BOOL isBackFromFullPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)chainLogNodeParams;
- (BOOL)isChainLogGatewayNode;
- (id)routerByProtocol:(id)a0;
- (void)setupRouter;
- (void)postImageAlbumBackNoti;
- (void)enterFullPageWithParams:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)setupContext;

@end
