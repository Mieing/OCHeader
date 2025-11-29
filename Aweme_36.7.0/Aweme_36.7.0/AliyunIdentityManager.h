@class NSString, DTFLogMonitor, ZimVerifyFactor;
@protocol ZIMMsgProxyDelegate, DTFRPCProxyProtocol;

@interface AliyunIdentityManager : NSObject <ZimVerifyFactorDelegate> {
    ZimVerifyFactor *_verifyFactor;
    id /* block */ _bioCallback;
    id /* block */ _quitCallback;
    BOOL _isBusy;
    BOOL _isKeepAlive;
}

@property (retain, nonatomic) NSString *modelFilePath;
@property (retain, nonatomic) DTFLogMonitor *monitor;
@property (copy, nonatomic) NSString *dataProtocolVersion;
@property (weak, nonatomic) id<ZIMMsgProxyDelegate> delegate;
@property (retain, nonatomic) id<DTFRPCProxyProtocol> rpcProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protocolVersion;
+ (id)version;
+ (id)sharedInstance;
+ (id)sdkVersion;

- (id)getMetaInfo;
- (void)verifyWith:(id)a0 extParams:(id)a1 onCompletion:(id /* block */)a2;
- (void)appResignActive:(id)a0;
- (void)onVerifyResponse:(id)a0;
- (void)onFinalize:(BOOL)a0 andExtinfo:(id)a1;
- (BOOL)colorParamFail:(id)a0;
- (id)checkMinimumVersion;
- (void)verifyTechWith:(id)a0 extParams:(id)a1 onCompletion:(id /* block */)a2;
- (void)sendlog:(id)a0 withSeedID:(id)a1;
- (void)quit:(id)a0 onCompletion:(id /* block */)a1;
- (id)modelFilePathContent;
- (BOOL)uploadLogChooice;
- (id)getlogArray;
- (id)finalPathForFile:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
