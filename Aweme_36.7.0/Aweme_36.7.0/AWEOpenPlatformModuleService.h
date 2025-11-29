@class NSString;

@interface AWEOpenPlatformModuleService : HTSService <AWEOpenPlatformModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)openPlatformAuthViewControllerWithSSOService:(id)a0;
- (BOOL)enableEletronicStamp;
- (id)eletronicStampSchema;
- (id)handleClickOpenPlatformAnchor:(id)a0 openCompletion:(id /* block */)a1;
- (id)getAllOpenPlatformSDKSchema;
- (id)getOpenPlatformAuthSchema;
- (id)getOpenPlatformShareSchema;
- (id)handleClickOpenPlatformAnchor:(id)a0;
- (void)openEletronicStampPage:(id)a0;
- (id)getJianyingBackDouyinExperiment;
- (id)handleVideoCutCutsameAnchorInfo:(id)a0 jumpParams:(id)a1 openCompletion:(id /* block */)a2;

@end
