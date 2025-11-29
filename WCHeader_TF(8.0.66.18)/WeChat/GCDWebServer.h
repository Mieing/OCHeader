@class NSString, NSMutableDictionary, NSURL, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_source, OS_dispatch_queue, GCDWebServerDelegate;

@interface GCDWebServer : NSObject {
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_group> *_sourceGroup;
    long long _activeConnections;
    BOOL _connected;
    struct __CFRunLoopTimer { } *_disconnectTimer;
    NSDictionary *_options;
    Class _connectionClass;
    double _disconnectDelay;
    NSObject<OS_dispatch_source> *_source4;
    NSObject<OS_dispatch_source> *_source6;
    struct __CFNetService { } *_registrationService;
    struct __CFNetService { } *_resolutionService;
    struct _DNSServiceRef_t { } *_dnsService;
    struct __CFSocket { } *_dnsSocket;
    struct __CFRunLoopSource { } *_dnsSource;
    NSString *_dnsAddress;
    unsigned long long _dnsPort;
    BOOL _bindToLocalhost;
    BOOL _suspendInBackground;
    unsigned long long _backgroundTask;
}

@property (readonly, nonatomic) NSURL *serverURL;
@property (readonly, nonatomic) NSURL *bonjourServerURL;
@property (readonly, nonatomic) NSURL *publicServerURL;
@property (readonly, nonatomic) NSMutableArray *handlers;
@property (readonly, nonatomic) NSString *serverName;
@property (readonly, nonatomic) NSString *authenticationRealm;
@property (readonly, nonatomic) NSMutableDictionary *authenticationBasicAccounts;
@property (readonly, nonatomic) NSMutableDictionary *authenticationDigestAccounts;
@property (readonly, nonatomic) BOOL shouldAutomaticallyMapHEADToGET;
@property (readonly, nonatomic) long long dispatchQueuePriority;
@property (nonatomic) id<GCDWebServerDelegate> delegate;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) unsigned long long port;
@property (readonly, nonatomic) NSString *bonjourName;
@property (readonly, nonatomic) NSString *bonjourType;

+ (void)setLogLevel:(int)a0;
+ (void)initialize;

- (void)logVerbose:(id)a0;
- (void)logInfo:(id)a0;
- (void)logWarning:(id)a0;
- (void)logError:(id)a0;
- (void)addGETHandlerForPath:(id)a0 staticData:(id)a1 contentType:(id)a2 cacheAge:(unsigned long long)a3;
- (void)addGETHandlerForPath:(id)a0 filePath:(id)a1 isAttachment:(BOOL)a2 cacheAge:(unsigned long long)a3 allowRangeRequests:(BOOL)a4;
- (id)_responseWithContentsOfDirectory:(id)a0;
- (void)addGETHandlerForBasePath:(id)a0 directoryPath:(id)a1 indexFilename:(id)a2 cacheAge:(unsigned long long)a3 allowRangeRequests:(BOOL)a4;
- (void)addDefaultHandlerForMethod:(id)a0 requestClass:(Class)a1 processBlock:(id /* block */)a2;
- (void)addDefaultHandlerForMethod:(id)a0 requestClass:(Class)a1 asyncProcessBlock:(id /* block */)a2;
- (void)addHandlerForMethod:(id)a0 path:(id)a1 requestClass:(Class)a2 processBlock:(id /* block */)a3;
- (void)addHandlerForMethod:(id)a0 path:(id)a1 requestClass:(Class)a2 asyncProcessBlock:(id /* block */)a3;
- (void)addHandlerForMethod:(id)a0 pathRegex:(id)a1 requestClass:(Class)a2 processBlock:(id /* block */)a3;
- (void)addHandlerForMethod:(id)a0 pathRegex:(id)a1 requestClass:(Class)a2 asyncProcessBlock:(id /* block */)a3;
- (BOOL)start;
- (BOOL)startWithPort:(unsigned long long)a0 bonjourName:(id)a1;
- (id)init;
- (void)dealloc;
- (void)_startBackgroundTask;
- (void)_didConnect;
- (void)willStartConnection:(id)a0;
- (void)_endBackgroundTask;
- (void)_didDisconnect;
- (void)didEndConnection:(id)a0;
- (void)addHandlerWithMatchBlock:(id /* block */)a0 processBlock:(id /* block */)a1;
- (void)addHandlerWithMatchBlock:(id /* block */)a0 asyncProcessBlock:(id /* block */)a1;
- (void)removeAllHandlers;
- (int)_createListeningSocket:(BOOL)a0 localAddress:(const void *)a1 length:(unsigned int)a2 maxPendingConnections:(unsigned long long)a3 error:(id *)a4;
- (id)_createDispatchSourceWithListeningSocket:(int)a0 isIPv6:(BOOL)a1;
- (BOOL)_start:(id *)a0;
- (void)_stop;
- (void)_didEnterBackground:(id)a0;
- (void)_willEnterForeground:(id)a0;
- (BOOL)startWithOptions:(id)a0 error:(id *)a1;
- (void)stop;
- (void).cxx_destruct;

@end
