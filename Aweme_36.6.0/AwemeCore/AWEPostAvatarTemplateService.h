@class NPGenericTemplateService_OC, NSString, ACCGenericTemplateAlbumHandler;

@interface AWEPostAvatarTemplateService : HTSService <AWEPostAvatarTemplateServiceProtocol>

@property (retain, nonatomic) ACCGenericTemplateAlbumHandler *genericTemplateHandler;
@property (retain, nonatomic) NPGenericTemplateService_OC *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publishWithSilence:(id)a0;
- (id)genAssetModel:(id)a0 name:(id)a1;
- (void)publish:(id)a0 templateModel:(id)a1;
- (void)silencePublish:(id)a0 templateModel:(id)a1 completeHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
