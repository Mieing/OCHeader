@class NSString;

@interface AWEStudioOpenShareServiceImpl : HTSService <AWEStudioOpenShareServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_publishEnabled;

- (void)shareExtensionEnterEditPageWithOnePhotoPath:(id)a0;
- (void)shareExtensionEnterEditPageWithMultiPhotoPaths:(id)a0;
- (void)shareExtensionEnterEditPageWithVideoPaths:(id)a0;
- (void)shareExtensionEnterEditPageWithMixedPaths:(id)a0;
- (BOOL)isFromLVProductWithAppKey:(id)a0;

@end
