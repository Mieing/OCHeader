@class NSSet, BDECPigeonClientConfigV2, NSString;

@interface AWEECOMIMPaasIMClientConfigNew : NSObject <AWEECOMIMPaasIMClientConfigProtocol>

@property (retain, nonatomic) BDECPigeonClientConfigV2 *clientConfig;
@property (copy, nonatomic) NSSet *inboxes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)IMClientConfigWithimClientConfig:(id)a0;

- (void).cxx_destruct;

@end
