@class NSString, NSDictionary, NSMutableDictionary, ACLifeKeeper, GCDWebServer, ACAppChannelServerOptions;

@interface ACAppChannelServer : NSObject <GCDWebServerDelegate> {
    NSMutableDictionary *_messageHandlers;
    ACLifeKeeper *_lifeKeeper;
    GCDWebServer *_gcdWebServer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) ACAppChannelServerOptions *options;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, copy, nonatomic) NSDictionary *messageHandlers;

- (void)WebServer_startWebServer;
- (void)WebServer_stopWebServer;
- (void)WebServer_asyncHandleMessageWithWSRequest:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)createACRequestFromWSRequest:(id)a0;
- (id)createWSResponseFromACResponse:(id)a0;
- (void)LifeKeeper_active;
- (void)LifeKeeper_deactive;
- (id)initWithOptions:(id)a0;
- (void)startServer;
- (void)stopServer;
- (void)registerMessageHandler:(id)a0;
- (void)unregisterMessageHandlerForName:(id)a0;
- (void)handleMessageWithRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
