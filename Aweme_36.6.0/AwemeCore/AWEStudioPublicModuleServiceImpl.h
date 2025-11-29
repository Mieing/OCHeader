@class NSString, ACCStudioInternalSubServiceContainer;
@protocol AWEStudioPublicPublishConfigService, AWEStudioPublicAuthService;

@interface AWEStudioPublicModuleServiceImpl : HTSService <AWEStudioPublicModuleService> {
    ACCStudioInternalSubServiceContainer *m_container;
}

@property (readonly, nonatomic) id<AWEStudioPublicAuthService> auth;
@property (readonly, nonatomic) id<AWEStudioPublicPublishConfigService> publishConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
