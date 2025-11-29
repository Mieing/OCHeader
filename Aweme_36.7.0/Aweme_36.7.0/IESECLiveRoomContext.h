@class IESECLiveGoodsJumpHandler, NSString, IESECLiveMessageDispatcher, IESECLiveApi, NSMutableDictionary, IESECLiveBusinessContext, IESECLiveTracker, IESECLiveEnterRoomUtil, IESECLiveContext;
@protocol IESECLiveDisposable, IESECLiveRoom, IESECLiveRoomContextDataSource;

@interface IESECLiveRoomContext : IESECContext <IESECLiveMessageDispatcher, IESECLiveRoomContext, IESECLiveRoomContainerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECLiveContext *baseContext;
@property (retain, nonatomic) NSMutableDictionary *messageSubscribers;
@property (retain, nonatomic) IESECLiveMessageDispatcher *messageDispatcher;
@property (retain, nonatomic) id<IESECLiveDisposable> followStatusDisposable;
@property (nonatomic) double beginEnterLiveRoomTime;
@property (nonatomic) double endEnterLiveRoomTime;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) BOOL isAfterLive;
@property (retain, nonatomic) id appTarget;
@property (readonly, nonatomic) IESECLiveBusinessContext *businessContext;
@property (readonly, nonatomic) IESECLiveGoodsJumpHandler *jumpHandler;
@property (readonly, nonatomic) IESECLiveEnterRoomUtil *enterRoomUtil;
@property (readonly, nonatomic) IESECLiveTracker *tracker;
@property (retain, nonatomic) id<IESECLiveRoom> room;
@property (weak, nonatomic) id<IESECLiveRoomContextDataSource> dataSource;
@property (nonatomic) BOOL jumpInRoom;
@property (copy, nonatomic) id /* block */ isComponentPreloading;
@property (copy, nonatomic) id /* block */ isComponentPreloaded;
@property (retain, nonatomic) IESECLiveApi *api;
@property (nonatomic) BOOL openWithSaaS;
@property (readonly, nonatomic) BOOL shopCartFlagExistInRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCurrentRoomContext;
+ (id)getContextByRoomID:(id)a0;
+ (BOOL)fixGetRoomContext;
+ (id)buildFakeRoomContextWithLiveContext:(id)a0;

- (void)setupWithParams:(id)a0;
- (void)didSetAttachingDIContext;
- (id)messageObjectWithProtocol:(id)a0;
- (void)registerMessageObject:(id)a0 toProtocol:(id)a1;
- (void)attachObject:(id)a0;
- (void)unSubscribeForAll:(id)a0;
- (id)containerRoomID;
- (void)addSubscriber:(id)a0 forClasses:(id)a1;
- (void)unSubscribe:(id)a0 forClass:(Class)a1;
- (id)initInRoom;
- (void)updateEcomRouteRule:(id)a0 priority:(long long)a1;
- (void)p_dispose;
- (void)setupWithParams:(id)a0 withEcomBusinessSceneType:(long long)a1;
- (void)p_setupTracker;
- (void)p_updateCoreParams;
- (void)p_registerFollowCallBack;
- (id)p_injectParams;
- (BOOL)p_followdAuthor;
- (BOOL)enableECommerce;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
