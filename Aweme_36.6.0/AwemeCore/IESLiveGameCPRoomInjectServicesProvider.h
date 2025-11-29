@class NSMutableDictionary;

@interface IESLiveGameCPRoomInjectServicesProvider : NSObject

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSMutableDictionary *providerMap;

- (void)didSetAttachingDIContext;
- (void)bindProviders;
- (void)unbindProviders;
- (void)registerProviders;
- (void)registerProvider:(id)a0 forProtocol:(id)a1 scene:(unsigned long long)a2;
- (void)registerProviderClass:(id)a0 forProtocol:(id)a1 scene:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithScene:(unsigned long long)a0;

@end
