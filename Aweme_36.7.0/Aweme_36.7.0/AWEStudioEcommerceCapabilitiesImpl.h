@class NSString;

@interface AWEStudioEcommerceCapabilitiesImpl : HTSService <HTSService, AWEStudioEcommerceCapabilitiesProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showVideoEditControllerWithExtensionModel:(id)a0 Assets:(id)a1 commentModel:(id)a2 style:(unsigned long long)a3 publishActionBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)getVideoEditWithExtensionModel:(id)a0 Assets:(id)a1 commentModel:(id)a2 style:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)componentClassesOfEditCommerceBusinessTemplate;
- (void)videoParameterizedCreationWithCommentModel:(id)a0 assets:(id)a1 style:(unsigned long long)a2 publishActionBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (id)getStringWithMaximumLength:(unsigned long long)a0 tail:(id)a1 originString:(id)a2;

@end
