@class NSString;

@interface AWECompanyProfileExtensionAreaCardService : HTSService <AWECompanyProfileExtensionAreaCardService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)profileExtensionAreaCardControllerClass;
- (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2;
- (Class)profileExtensionAreaCardControllerClassV2;

@end
