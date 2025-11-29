@class BDByteCastContext, NSTimer, NSArray, NSString, NSLock, BDByteCastHttpServerManager, BDByteCastEnvCheckManager, NSDictionary, BDByteCastLocalNetworkAuthorizationChecker, BDByteCastConfiguration, TTReachability;

@interface BDByteCastKit : NSObject {
    NSLock *_lock;
    NSString *_localIpAddress;
}

@property (retain, nonatomic) BDByteCastContext *context;
@property (nonatomic) unsigned long long authorizedSdkType;
@property (copy, nonatomic) NSArray *availableProtocols;
@property (copy, nonatomic) NSArray *protocolArray;
@property (retain, nonatomic) TTReachability *reachability;
@property (nonatomic) BOOL needRefreshIp;
@property (copy, nonatomic) NSArray *defaultProtocols;
@property (retain, nonatomic) BDByteCastLocalNetworkAuthorizationChecker *lnpChecker;
@property (retain, nonatomic) NSTimer *updateTimer;
@property (weak, nonatomic) BDByteCastEnvCheckManager *envCheckManager;
@property (retain, nonatomic) BDByteCastHttpServerManager *httpServer;
@property (readonly, copy, nonatomic) NSString *contextId;
@property (readonly, copy, nonatomic) NSString *deviceIpAddress;
@property (readonly, copy, nonatomic) NSArray *authorizedSdkTypeArray;
@property (readonly, copy, nonatomic) NSDictionary *protocolsVersion;
@property (copy, nonatomic) NSDictionary *externalCommonExtraDataDictionary;
@property (copy, nonatomic) NSArray *dlnaXmlParserKeyArray;
@property (nonatomic) unsigned long long linkBleState;
@property (nonatomic) BOOL enableBdlinkSsdp;
@property (nonatomic) BOOL enableBdlinkSsdpBroadcast;
@property (readonly, nonatomic) BDByteCastConfiguration *configuration;

+ (BOOL)hasCalledCheckNetworkPermissions;
+ (id)sharedInstance;

- (unsigned long long)initializeWithConfiguration:(id)a0;
- (void)createContextWithId:(id)a0;
- (id)createDefaultSortedProtocols;
- (unsigned long long)availableProtocolWithType:(unsigned long long)a0;
- (void)updateProtocolArray:(id)a0;
- (id)generateAuthSignString:(id)a0;
- (void)checkLocalNetworkPermissionWithCallback:(id /* block */)a0;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (id)init;
- (void)reachabilityChanged:(id)a0;
- (void)updateStatus;
- (void)dealloc;

@end
