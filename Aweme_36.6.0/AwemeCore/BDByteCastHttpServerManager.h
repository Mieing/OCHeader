@class NSString, BDCastGCDWebServer, BDByteCastPortProber;

@interface BDByteCastHttpServerManager : NSObject <BDCastGCDWebServerDelegate>

@property (retain, nonatomic) BDCastGCDWebServer *webServer;
@property (nonatomic) unsigned short port;
@property (nonatomic) BOOL needRestartServer;
@property (retain, nonatomic) BDByteCastPortProber *portProber;
@property (readonly, copy, nonatomic) NSString *ip;
@property (copy, nonatomic) id /* block */ messageReceivedCallback;
@property (copy, nonatomic) id /* block */ messageReceivedCallbackV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)initWithContextId:(id)a0;
- (id /* block */)asyncProcessBlock;
- (id /* block */)asyncProcessXMLBlock;
- (void)addNotificationHandlers;
- (void)parseDataWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)parseCustomDataWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)parseFailedWithMessage:(id)a0 type:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)webServerDidStart:(id)a0;
- (void)webServerDidConnect:(id)a0;
- (void)webServerDidDisconnect:(id)a0;
- (void)webServerDidStop:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)stopServer;
- (void)startServer;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;

@end
