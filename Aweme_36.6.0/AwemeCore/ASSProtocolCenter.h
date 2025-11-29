@protocol APDynamicProtocol, APDeviceColorProtocol, APRiskConfigServiceProtocol, APRiskLoggerProtocol, APRiskRemoteLoggerProtocol, APRiskSyncServiceProtocol, APRiskFileUploadProtocol, APDIDProtocol, APRiskRPCProtocol, APSignProtocol;

@interface ASSProtocolCenter : NSObject

@property (retain, nonatomic) id<APRiskRemoteLoggerProtocol> remoteLoggerDelegate;
@property (retain, nonatomic) id<APRiskConfigServiceProtocol> configServiceDelegate;
@property (retain, nonatomic) id<APRiskFileUploadProtocol> fileUploadDelegate;
@property (retain, nonatomic) id<APRiskRPCProtocol> rpcDelegate;
@property (retain, nonatomic) id<APRiskSyncServiceProtocol> syncServiceDelegate;
@property (retain, nonatomic) id<APRiskLoggerProtocol> logDelegate;
@property (retain, nonatomic) id<APDeviceColorProtocol> deviceColorDelegate;
@property (retain, nonatomic) id<APDynamicProtocol> dynamicDelegate;
@property (retain, nonatomic) id<APSignProtocol> signDelegate;
@property (retain, nonatomic) id<APDIDProtocol> apdidDelegate;

+ (id)sharedCenter;

- (void)setDelegate:(long long)a0 implClass:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
