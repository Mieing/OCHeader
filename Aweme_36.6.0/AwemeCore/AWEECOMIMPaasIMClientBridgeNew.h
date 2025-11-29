@class NSString, BDECPigeonCustomerClient;
@protocol AWEECOMIMPaasIMClientConfigProtocol;

@interface AWEECOMIMPaasIMClientBridgeNew : NSObject <AWEECOMIMPaasIMClientBridgeProtocol>

@property (retain, nonatomic) BDECPigeonCustomerClient *pigeonClient;
@property (nonatomic) double imServerTimestamp;
@property (retain, nonatomic) id<AWEECOMIMPaasIMClientConfigProtocol> clientConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)IMClientBridgeWithPigeonClient:(id)a0;

- (void).cxx_destruct;

@end
